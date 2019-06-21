#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int N; vector<int> X, Y;
int solve() {

	int res = N;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j) continue;
			long long dx = X[j] - X[i], dy = Y[j] - Y[i];

			int sub = 0;
			for (int i2 = 0; i2 < N; ++i2) {
				for (int j2 = 0; j2 < N; ++j2) {
					if (j2 == i2) continue;
					if (dx == X[j2] - X[i2] && dy == Y[j2] - Y[i2]) ++sub;
				}
			}
			res = min(res, N - sub);
		}
	}
	return res;
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	cin >> N;
	X.resize(N); Y.resize(N);

	if (N == 1) { cout << "1" << endl; return 0; }
	rep(i, N) { cin >> X[i] >> Y[i]; }

	cout << solve() << endl;
}