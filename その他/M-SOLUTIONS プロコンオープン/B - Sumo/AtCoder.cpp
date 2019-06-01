#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string S; cin >> S;
	int n = 0;
	for (int i = 0; i < S.size(); i++)
	{

		if (S[i] == 'o') { n++; }
	}
	if ((n + 15 - S.size()) >= 8) { cout << "YES" << endl; }
	else { cout << "NO" << endl; }
}