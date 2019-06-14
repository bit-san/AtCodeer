#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int L[2100][2100], R[2100][2100], U[2100][2100], D[2100][2100];

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int H, W; cin >> H >> W;
	vector<string> S(H);
	rep(i, H) { cin >> S[i]; }
	
	rep(i, H) {
		int cur = 0;
		rep(j,W) {
			if (S[i][j]=='#') {	cur = 0;}
			else { 
				cur++;
				L[i][j] = cur;
			}
		}
	}
	rep(i, H) {
		int cur = 0;
		for (int j = W - 1; j >= 0; j--) {
			if (S[i][j] == '#') { cur = 0; }
			else {
				cur++;
				U[i][j] = cur;
			}
		}
	}

	rep(j, W) {
		int cur = 0;
		rep(i, H) {
			if (S[i][j] == '#') { cur = 0; }
			else {
				cur++;
				D[i][j] = cur;
			}
		}
	}
	rep(j, W) {
		int cur = 0;
		for (int i = H - 1; i >= 0; i--) {
			if (S[i][j] == '#') { cur = 0; }
			else {
				cur++;
				R[i][j] = cur;
			}
		}
	}

	int res = 0;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (S[i][j] == '#') continue;
			res = max(res, L[i][j] + R[i][j] + U[i][j] + D[i][j] - 3);
		}
	}
	cout << res << endl;

}