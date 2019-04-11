#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int n, q, l, r;
string s;
int main() {
	cin >> n >> q >> s;
	//文字列は1~Nと数える
	//ACACTACG
	//01234567 : s
	
	vector<int> a(n+1);

	for (int i = 1; i < n; i++) {
		//-ACACTACG
		//012345678: a
		//--1-2--3-
		a.at(i+1) = a.at(i);
		if (s.at(i - 1) == 'A'&&s.at(i) == 'C') {
			a.at(i + 1) += 1;
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> l >> r;
		cout << a.at(r) - a.at(l) << endl;
	}
	return 0;
}
