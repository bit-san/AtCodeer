#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, M; cin >> N >> M;
	vector <int> cnt(M);

	for (int i = 0; i < N; ++i) {
		int K; cin >> K;
		for (int j = 0; j < K; ++j) {
			int A; cin >> A; 
			A--;
			cnt[A]++;
		}
	}
	int ans = 0;
	for (int i = 0; i < M; ++i) {
		if (cnt[i] == N) {
			ans++;
		}
	}
	cout << ans << endl;
}