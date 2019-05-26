#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int main() {
	int N, p, x = 1;
	cin >> N;
	vector<pair<string, int>> r(N);

	for (int i = 0; i < N; i++) {
		cin >> r[i].first >> p;
		r[i].second = -10000 * p - x; //何番目の入力か
		x++;
	}

	sort(r.begin(), r.end());
	/*
	for (int i = 0; i < N; i++) {
		cout << r[i].first << ":" << r[i].second << endl;
	}
	*/

	for (int i = 0; i < N; i++) {
		cout << (-1 * r[i].second) % 1000 << endl;
	}
}