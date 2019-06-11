#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;
const int MOD = 1000000007;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	vector<int> ver(N + 1, 0); //0=安全:1=壊れている
	for (int i = 0; i < M; i++) {
		int A; cin >> A;
		ver[A] = 1;
	}

	vector<int> dp(N + 1, 0);
	dp[0] = 1;
	if (ver[1] == 0) { dp[1] = 1; }

	for (int n = 2; n <= N; n++) {
		if (ver[n - 1] == 0) {
			dp[n] += dp[n - 1]; // n-1 段目が安全なら
			
		}
		if (ver[n - 2] == 0) {
			dp[n] += dp[n - 2]; // n-2 段目が安全なら
		}
		dp[n] %= MOD; // 1000000007 で割る
	}
	cout << dp[N] << endl;
}