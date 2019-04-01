#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		int x = i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 + i / 10000 % 10;
		if (x >= a && x <= b) {
			sum += i;
		}
	}
	cout << sum << endl;
}