#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

lli GCD(ll a, ll b) {return b ? GCD(b, a % b) : a;}
lli LCM(ll a, ll b) { return a / GCD(a, b) * b; }

lli f(lli x, lli a, lli b) {
	lli res = x;
	res -= x / a;
	res -= x / b;
	res += x / LCM(a, b);
	return res;
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	lli A, B, C, D; cin >> A >> B >> C >> D;
	
	lli ans = f(B, C, D) - f(A - 1, C, D);
	cout << ans << endl;

}