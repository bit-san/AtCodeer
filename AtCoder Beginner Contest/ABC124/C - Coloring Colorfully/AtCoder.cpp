#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int res = 0;
	string s;
	cin >> s;
	if (s.at(0) == '1') {
		for (int i = 1; i < s.size(); i++) {
			if (i % 2 != 0 && s.at(i) == '1') {
				res++;
			}
			else if (i % 2 == 0 && s.at(i) == '0') {
				res++;
			}
		}
	}
	else {
		for (int i = 1; i < s.size(); i++) {
			if (i % 2 != 0 && s.at(i) == '0') {
				res++;
			}
			else if (i % 2 == 0 && s.at(i) == '1') {
				res++;
			}
		}
	}
	cout << res << endl;
}