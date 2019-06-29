#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, res = 0; cin >> N;
	vector<int>ver(N);
	rep(i, N) { cin >> ver[i]; }

	for (int i = 1; i < N - 1; i++) {
		if (ver[i - 1] > ver[i] && ver[i] > ver[i + 1]) {
			res++;
		}
		else if (ver[i - 1] < ver[i] && ver[i] < ver[i + 1]) {
			res++;
		}
	}
	cout << res << endl;
}