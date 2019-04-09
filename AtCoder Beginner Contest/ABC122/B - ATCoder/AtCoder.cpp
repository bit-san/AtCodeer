#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int a = 0;
	int maxsss = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size();i++) {
		if (s.at(i)=='A'|| s.at(i) == 'C'|| s.at(i) == 'G'|| s.at(i) == 'T') {a++;}
		else {a = 0;}
		maxsss = max(maxsss, a);
	}

	cout << maxsss << endl;
}