#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	ll L, R; cin >> L >> R;

	if (R - L > 2019) { cout << 0 << endl; }
	else {
		ll res = 2018;
		for (ll x = L; x < R; ++x)
			for (ll y = x + 1; y <= R; ++y) {
				res = min(res, (x * y) % 2019);
			}
		cout << res << endl;
	}
}