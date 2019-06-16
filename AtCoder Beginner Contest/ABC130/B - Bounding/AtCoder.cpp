#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, X; cin >> N >> X;
	vector<int> ver(N);
	rep(i, N) { cin >> ver[i]; }
	vector<int>S(N + 1);
	S[0] = 0;
	int A = 0;
	for (int i = 0; i < N; i++)
	{
		A = A + ver[i];
		S[i + 1] = A;
	}
	int res = 0;
	rep(i, N + 1) {
		if (S[i] <= X) {
			res++;
		}
	}
	cout << res << endl;
}