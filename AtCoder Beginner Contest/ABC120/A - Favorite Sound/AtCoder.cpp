#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int A, B, C, res;
	cin >> A >> B >> C;
	if (B / A < C) {
		res = B / A;
	}
	else {
		res = C;
	}
	cout << res << endl;
}
