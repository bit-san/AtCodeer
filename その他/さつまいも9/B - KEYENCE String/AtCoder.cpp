#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string S; cin >> S;

	for (int i = 0; i < S.size(); i++) {
		for (int j = i; j < S.size(); j++) {
			string A = S;
			A = A.substr(0, i) + A.substr(j, S.size() - j);
			if (A == "keyence") {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}