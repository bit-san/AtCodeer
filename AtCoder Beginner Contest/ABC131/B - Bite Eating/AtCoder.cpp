#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, L, sum = 0; cin >> N >> L;
	vector<int> ver(N + 1, 0);
	for (int i = 1; i < N + 1; i++) {
		ver[i] = L + i - 1;
		sum += ver[i];
	}
	for (int i = 1; i < N + 1; i++) {
		if (ver[i] == 0) {
			cout << sum << endl;
			return 0;
		}
	}
	int A = -99999, B = 99999;
	if (sum >= 0) {
		for (int i = 1; i < N + 1; i++) {
			A = max(A, sum - ver[i]);
		}
		cout << A << endl;
		return 0;
	}
	else {
		for (int i = 1; i < N + 1; i++) {
			B = min(B, sum - ver[i]);
		}
		cout << B << endl;
		return 0;
	}
}
}