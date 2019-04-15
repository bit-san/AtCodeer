#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int N, T, res = 0, time = 0;
	cin >> N >> T;
	vector<int> A(N);
	for (int i = 1; i < N; i++) {
		cin >> A.at(i);
	}
	for (int j = 1; j < N; j++) {
		time = time + A.at(j);
	}
	while (time > 0) {
		time = time - T;
		res++;
	}
	cout << res << endl;
}
