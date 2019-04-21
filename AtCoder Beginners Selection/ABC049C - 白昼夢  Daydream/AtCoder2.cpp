#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	string S;cin >> S;

	if (regex_match(S, regex("(dream(er)?|eraser?)*"))) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
