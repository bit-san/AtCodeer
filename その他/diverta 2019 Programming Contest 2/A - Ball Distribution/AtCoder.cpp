#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, K, res; cin >> N >> K;
	if (K == 1 || N == K) {
		cout << "0" << endl;
		return 0;
	}
	if (N > K) {
		res = N - K;
		cout << res << endl;
	}
	else {
		cout << "1" << endl;
		return 0;
	}
}