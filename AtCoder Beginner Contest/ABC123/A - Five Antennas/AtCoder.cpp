#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int a, b, c, d, e, k;
	bool flg = false;
	cin >> a >> b >> c >> d >> e >> k;

	if (b - a > k) {
		flg = true;
	}
	if (c - a > k) {
		flg = true;
	}
	if (d - a > k) {
		flg = true;
	}
	if (e - a > k) {
		flg = true;
	}

	if (c - b > k) {
		flg = true;
	}
	if (d - b > k) {
		flg = true;
	}
	if (e - b > k) {
		flg = true;
	}

	if (d - c > k) {
		flg = true;
	}
	if (e - c > k) {
		flg = true;
	}

	if (e - d > k) {
		flg = true;
	}

	if (flg==false) {
		cout << "Yay!" << endl;
	}
	else {
		cout << ":(" << endl;
	}

	return 0;
}