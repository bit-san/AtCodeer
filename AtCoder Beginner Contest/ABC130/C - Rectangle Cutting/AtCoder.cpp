#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int W, H, x, y; cin >> W >> H >> x >> y;
	double res = (double) (W*H) / 2;
	int sum = (W == x * 2 && H == y * 2) ? 1 : 0;
	cout << res << " " << sum << endl;
}