#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, D; cin >> N >> D;
	vector< vector<int> > ver(N, vector<int>(D));
	rep(i, N) {
		rep(j, D) { cin >> ver[i][j]; }
	}

	int res = 0;
	rep(x, N) {
		for (int y = x + 1; y < N; y++) {
			double sum = 0;
			rep(z, D) { sum += pow(ver[x][z] - ver[y][z], 2); }
			sum = sqrt(sum);
			if (sum == (int)sum) { res++; }
		}
	}
	cout << res << endl;
}