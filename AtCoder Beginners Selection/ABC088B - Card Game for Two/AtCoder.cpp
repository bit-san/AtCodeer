#include "pch.h"
#include "bits/stdc++.h"
using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, A = 0, B = 0;
	cin >> N;
	vector<int> X (N+1);

	for (int i = 0; i < N; i++) {cin >> X.at(i);}
	sort(X.begin(), X.end());
	reverse(X.begin(), X.end());

	A = A + X.at(0);
	if (N > 1) {
		for (int i = 1; i < N; i++) {
			if (i % 2 != 0)	B = B + X.at(i);
			else			A = A + X.at(i);
		}
	}
	cout << A - B << endl;
}