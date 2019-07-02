#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, res; cin >> N;
	vector<int>ver(N);
	rep(i, N) { cin >> ver[i]; }
	sort(ver.begin(), ver.end());
	res = ver[N / 2] - ver[N / 2 - 1];
	cout << res << endl;
}