#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int n, t, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t >> x >> y;
		if (x + y > t || (x + y + t) % 2 != 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
