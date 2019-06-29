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

	if (S[0] == S[1] && S[1] == S[2] && S[2] == S[3]) {
		cout << "No" << endl;
		return 0;
	}
	if ((S[0] == S[1] && S[2] == S[3]) ||
		(S[0] == S[3] && S[1] == S[2]) ||
		(S[0] == S[2] && S[1] == S[3])) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}