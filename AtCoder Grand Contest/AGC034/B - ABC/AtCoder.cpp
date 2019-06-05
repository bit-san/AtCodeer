#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string s;
	cin >> s;
	lli res = 0, cur = 0;
	for (int i = 0; i < s.size()-1; i++) {
		if (s[i] == 'A') { cur++; }
		else {
			if (s[i] == 'B' && s[i + 1] == 'C') {
				res += cur;
				i++;
			}
			else { cur = 0; }
		}
	}
	cout << res << endl;
}