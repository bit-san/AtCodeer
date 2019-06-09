#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	vector<int> N(3);
	int res;
	cin >> N[0] >> N[1] >> N[2];
	sort(N.begin(), N.end());
	cout << N[0] + N[1] << endl;
}