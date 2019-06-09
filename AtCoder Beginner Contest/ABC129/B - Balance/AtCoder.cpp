#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, cunt = 1, res = 999999999;
	cin >> N;
	vector<int> ver(N);

	for (int i = 0; i < N; i++) { cin >> ver[i]; }

	while (cunt < N) {
		int A = 0, B = 0;
		for (int i = 0; i < N; i++)
		{
			if (i > cunt) { A += ver[i]; }
			else { B += ver[i]; }
		}
		res = min(res, abs(A - B));
		cunt++;
	}
	cout << res << endl;
}