#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N,X=0; cin >> N;
	vector<int> L(N);
	rep(i, N) { 
		cin >> L[i]; 
		X = max(X, L[i]);
	}

	int sum =0;
	rep(i,N) {
		sum += L[i];
	}
	if (X<sum-X) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}