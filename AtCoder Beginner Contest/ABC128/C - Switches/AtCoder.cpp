#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

//bit演算
int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, M, ans = 0; cin >> N >> M;
	vector<int> a(N);

	for (int i = 0; i < M; ++i) {
		int k; cin >> k;
		for (int j = 0; j < k; ++j) {
			int s; cin >> s;
			s--;
			a[s] |= 1 << i;	// |= : ビット和代入
		}
	}

	int p = 0;
	for (int i = 0; i < M; i++)
	{
		int x; cin >> x;
		p |= x << i;
	}

	for (int s = 0; s < (1 << N); s++) {
		int t = 0;
		for (int i = 0; i < N; i++)
		{
			if (s >> i & 1) { t ^= a[i]; } //ビット排他的論理和代入
		}
		if (t == p) { ans++; }
	}
	cout << ans << endl;
}