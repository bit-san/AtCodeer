#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string N;
	cin >> N;
	for (int i = 0; i < 3; i++) {
		if (N[i] == N[i + 1]) {
			cout << "Bad" << endl;
			return 0;
		}
	}
	cout << "Good" << endl;
}