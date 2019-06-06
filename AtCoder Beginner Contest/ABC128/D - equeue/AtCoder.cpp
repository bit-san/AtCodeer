#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, M,ans=0; cin >> N >> M;
	vector<int> ver(N);
	for (int i = 0; i < N; i++) { cin >> ver[i]; }

	for (int A = 0; A <= N; A++) {
		for (int B = 0; B <= N; B++) {
			if (A + B > N || A + B > M) { continue; }
			vector<int> S;
			for (int i = 0; i < A; i++) { S.push_back(ver[i]); }
			for (int i = 0; i < B; i++) { S.push_back(ver[N - i - 1]); }
			sort(S.begin(), S.end());
			int sum = 0;
			for (int i = 0; i < S.size(); i++) { sum += S[i]; }
			int cnt = M - (A + B);
			for (int i = 0; i < S.size(); i++) {
				if (S[i] >= 0) { break; }
				if (cnt) {
					cnt--;
					sum -= S[i];
				}
			}
			ans = max(ans, sum);
		}
	}
	cout << ans << endl;
}