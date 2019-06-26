#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int N, A, B; cin >> N;
	vector<pair<int, int>> ver;
	rep(i, N) {
		cin >> A >> B;
		ver.emplace_back(B,A);
	}
	
	sort(ver.begin(), ver.end());
	int sum = 0;
	bool X = true;
	for (auto v:ver) {
		sum += v.second;
		if (sum>v.first) {
			X = false;
			break;
		}
	}
	cout << (X ? "Yes" : "No") << endl;
}