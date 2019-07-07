#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, A, B; cin >> N >> A >> B;

	if (N*A < B) { cout << N * A << endl; }
	else { cout << B << endl; }
}