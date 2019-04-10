#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int n, q, l, r;
string s;
int main() {
	cin >> n >> q >> s;
	//文字列は1~Nと数える
	//ACACTACG => 1~8

	vector<int> a(n+1);
	//ACがある場所に何個目かを収納する
	//ACACTACG
	//-1-2--3-
	//01234567 : aの配列の数え方
	for (int i = 1; i < n; i++) {
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