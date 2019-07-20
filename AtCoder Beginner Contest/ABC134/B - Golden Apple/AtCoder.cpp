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

	int A = N, res = 0;
	while (A > 0) {
		A = A - (2 * D + 1);
		res++;
	}
	cout << res << endl;
}
