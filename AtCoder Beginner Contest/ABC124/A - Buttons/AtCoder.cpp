#include "pch.h"
#include "bits/stdc++.h"

using namespace std;
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b, MAXX = 0;
	cin >> a >> b;
	for (int i = 0; i < 2; i++) {
		if (a > b) {
			MAXX = MAXX + a;
			a--;
		}
		else if (b > a) {
			MAXX = MAXX + b;
			b--;
		}
		else {
			MAXX = MAXX + a;
			a--;
		}
	}
	cout << MAXX << endl;
}