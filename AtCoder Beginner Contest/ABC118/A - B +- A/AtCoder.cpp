#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	if ( B%A == 0) {
		cout << A + B << endl;
	}
	else {
		cout << B - A << endl;
	}
}