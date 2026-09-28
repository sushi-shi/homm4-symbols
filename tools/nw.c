/* Global sequence alignment core for align.py (linear gaps, feature-based scores).
 *
 * stdin:
 *   nA nB nC
 *   nB lines:  retn logsize xcu vftonly logfix fixed
 *   nA lines:  gap retn cdecl logsize extra dyninit vmode vcls ctorcls logfix deleting fixj
 *              fixj >= 0: the item is pinned to B[fixj] (exact pair); fixed: B is pinned by some item
 *              vmode: 0 none, 1 virtual of class vcls, 2 non-virtual, 3 this-adjusting thunk
 *   vftonly: 0 no, 1 in a vftable, 2 this-adjusting thunk, 3 deleting destructor
 *   nC lines:  nslot j...  nref j...
 * stdout: one line per matched pair "i j"
 *
 * Weights are passed on argv in the order of W_* below.
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define W_THUNK_OK 3.0
#define W_THUNK_BAD -8.0
#define W_DEL_OK 4.0
#define W_PINNED 200.0
#define W_FORBID -1000.0
#define W_DEL_BAD -4.0

static double W_RETN_OK, W_RETN_OK_CDECL, W_RETN_BAD, W_VFT_OK, W_VFT_BAD, W_NONVIRT_VFTONLY,
    W_CTOR_OK, W_CTOR_BAD, W_XCU_OK, W_XCU_BAD, W_SIZE_MAX, W_SIZE_MIN, W_SIZE_SLOPE, GAP_B,
    W_FIX_MAX, W_FIX_MIN, W_FIX_SLOPE;

typedef struct { int n; int *j; } list_t;

static void read_list(list_t *l) {
	if (scanf("%d", &l->n) != 1) exit(2);
	l->j = malloc(sizeof(int) * (l->n + 1));
	for (int k = 0; k < l->n; k++) scanf("%d", &l->j[k]);
}

int main(int argc, char **argv) {
	if (argc != 18) { fprintf(stderr, "need 17 weights\n"); return 1; }
	double *w[] = {&W_RETN_OK, &W_RETN_OK_CDECL, &W_RETN_BAD, &W_VFT_OK, &W_VFT_BAD, &W_NONVIRT_VFTONLY,
	               &W_CTOR_OK, &W_CTOR_BAD, &W_XCU_OK, &W_XCU_BAD, &W_SIZE_MAX, &W_SIZE_MIN, &W_SIZE_SLOPE, &GAP_B,
	               &W_FIX_MAX, &W_FIX_MIN, &W_FIX_SLOPE};
	for (int k = 0; k < 17; k++) *w[k] = atof(argv[k + 1]);

	int nA, nB, nC;
	if (scanf("%d %d %d", &nA, &nB, &nC) != 3) return 2;
	int *bretn = malloc(sizeof(int) * nB), *bxcu = malloc(sizeof(int) * nB), *bvo = malloc(sizeof(int) * nB),
	    *bfixed = malloc(sizeof(int) * nB);
	double *blog = malloc(sizeof(double) * nB), *bfix = malloc(sizeof(double) * nB);
	for (int j = 0; j < nB; j++) scanf("%d %lf %d %d %lf %d", &bretn[j], &blog[j], &bxcu[j], &bvo[j], &bfix[j], &bfixed[j]);
	double *agap = malloc(sizeof(double) * nA), *alog = malloc(sizeof(double) * nA), *aextra = malloc(sizeof(double) * nA), *afix = malloc(sizeof(double) * nA);
	int *aretn = malloc(sizeof(int) * nA), *acdecl = malloc(sizeof(int) * nA), *adyn = malloc(sizeof(int) * nA),
	    *avmode = malloc(sizeof(int) * nA), *avcls = malloc(sizeof(int) * nA), *actor = malloc(sizeof(int) * nA),
	    *adel = malloc(sizeof(int) * nA), *afixj = malloc(sizeof(int) * nA);
	for (int i = 0; i < nA; i++)
		scanf("%lf %d %d %lf %lf %d %d %d %d %lf %d %d", &agap[i], &aretn[i], &acdecl[i], &alog[i], &aextra[i], &adyn[i],
		      &avmode[i], &avcls[i], &actor[i], &afix[i], &adel[i], &afixj[i]);
	list_t *slots = calloc(nC, sizeof(list_t)), *refs = calloc(nC, sizeof(list_t));
	for (int c = 0; c < nC; c++) { read_list(&slots[c]); read_list(&refs[c]); }

	double *Hp = malloc(sizeof(double) * (nB + 1)), *H = malloc(sizeof(double) * (nB + 1));
	double *s = malloc(sizeof(double) * nB);
	unsigned char *mark = calloc(nB, 1);
	unsigned char *tb = malloc((size_t)(nA + 1) * (nB + 1));
	if (!tb) { fprintf(stderr, "oom\n"); return 3; }
	Hp[0] = 0;
	for (int j = 1; j <= nB; j++) Hp[j] = Hp[j - 1] - GAP_B;
	memset(tb, 2, nB + 1);

	for (int i = 1; i <= nA; i++) {
		int a = i - 1;
		for (int j = 0; j < nB; j++) {
			double v = aextra[a];
			if (aretn[a] > -99 && bretn[j] >= 0)
				v += bretn[j] == aretn[a] ? (acdecl[a] ? W_RETN_OK_CDECL : W_RETN_OK) : W_RETN_BAD;
			if (alog[a] > -1e9) {
				double d = W_SIZE_MAX - W_SIZE_SLOPE * fabs(blog[j] - alog[a]);
				v += d < W_SIZE_MIN ? W_SIZE_MIN : d;
			}
			if (afix[a] > -1e9) {
				double d = W_FIX_MAX - W_FIX_SLOPE * fabs(bfix[j] - afix[a]);
				v += d < W_FIX_MIN ? W_FIX_MIN : d;
			}
			if (avmode[a] == 3) v += bvo[j] == 2 ? W_THUNK_OK : W_THUNK_BAD;
			else if (bvo[j] == 2) v += W_THUNK_BAD;
			else if (bvo[j] == 3) v += adel[a] ? W_DEL_OK : W_THUNK_BAD;
			else if (adel[a]) v += W_DEL_BAD;
			else if (avmode[a] == 2 && bvo[j]) v += W_NONVIRT_VFTONLY;
			/* bxcu: 1 .CRT$XCU wrapper, 2 destructor it registers with atexit */
			if (adyn[a]) v += bxcu[j] ? W_XCU_OK : W_XCU_BAD;
			else if (bxcu[j]) v += W_XCU_BAD;
			s[j] = v;
		}
		if (afixj[a] >= 0) { /* exact pair: only its own target */
			for (int j = 0; j < nB; j++) s[j] = j == afixj[a] ? W_PINNED : W_FORBID;
		} else {
			for (int j = 0; j < nB; j++) if (bfixed[j]) s[j] = W_FORBID;
		}
		if (avmode[a] == 1 && afixj[a] < 0) {
			list_t *l = &slots[avcls[a]];
			for (int k = 0; k < l->n; k++) mark[l->j[k]] = 1;
			for (int j = 0; j < nB; j++) s[j] += mark[j] ? W_VFT_OK : W_VFT_BAD;
			for (int k = 0; k < l->n; k++) mark[l->j[k]] = 0;
		}
		if (actor[a] >= 0 && afixj[a] < 0) {
			list_t *l = &refs[actor[a]];
			for (int k = 0; k < l->n; k++) mark[l->j[k]] = 1;
			for (int j = 0; j < nB; j++) s[j] += mark[j] ? W_CTOR_OK : W_CTOR_BAD;
			for (int k = 0; k < l->n; k++) mark[l->j[k]] = 0;
		}
		unsigned char *row = tb + (size_t)i * (nB + 1);
		H[0] = Hp[0] - agap[a];
		row[0] = 1;
		for (int j = 1; j <= nB; j++) {
			double d = Hp[j - 1] + s[j - 1], u = Hp[j] - agap[a], l = H[j - 1] - GAP_B;
			if (d >= u && d >= l) { H[j] = d; row[j] = 0; }
			else if (u >= l) { H[j] = u; row[j] = 1; }
			else { H[j] = l; row[j] = 2; }
		}
		double *t = Hp; Hp = H; H = t;
	}
	fprintf(stderr, "final score %.1f\n", Hp[nB]);

	int i = nA, j = nB, np = 0;
	int *pi = malloc(sizeof(int) * (nA + nB)), *pj = malloc(sizeof(int) * (nA + nB));
	while (i > 0 || j > 0) {
		int t = i == 0 ? 2 : (j == 0 ? 1 : tb[(size_t)i * (nB + 1) + j]);
		if (t == 0) { pi[np] = i - 1; pj[np] = j - 1; np++; i--; j--; }
		else if (t == 1) i--;
		else j--;
	}
	for (int k = np - 1; k >= 0; k--) printf("%d %d\n", pi[k], pj[k]);
	return 0;
}
