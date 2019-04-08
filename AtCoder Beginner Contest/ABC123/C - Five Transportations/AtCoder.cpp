#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	double N;
	cin >> N;
	double A;
	double minimum = 10000000000000010LL;
	for (int i = 0; i < 5; i++) {
		cin >> A;
		minimum = min(minimum, A);
	}

	cout << (long long)ceil(N / minimum) + 4 << endl;
}