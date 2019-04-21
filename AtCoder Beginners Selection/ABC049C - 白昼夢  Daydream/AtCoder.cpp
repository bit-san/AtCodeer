#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string s;
	cin >> s;

	int i = 0;
	while (i < s.size()) {
		// dreameraser
		if (s.substr(i, 11) == "dreameraser") {
			i += 11;
		}
		// dreamerase
		else if (s.substr(i, 10) == "dreamerase") {
			i += 10;
		}
		// dreamer
		else if (s.substr(i, 7) == "dreamer") {
			i += 7;
		}
		// eraser
		else if (s.substr(i, 6) == "eraser") {
			i += 6;
		}
		// dream, erase
		else if (s.substr(i, 5) == "erase" || s.substr(i, 5) == "dream") {
			i += 5;
		}
		// 失敗
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}
