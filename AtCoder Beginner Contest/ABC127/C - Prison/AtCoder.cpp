#include "pch.h"
#include "bits/stdc++.h"

typedef long long int ll;

using namespace std;

int main() {
	int N, M, x = 0, y = 999999999, L, P, res;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> L >> P;
		x = max(L, x);
		y = min(P, y);
	}
	if (y >= x) { res = (y - x) + 1; }
	else { res = 0; }

	if (res <= N) {
		cout << res << endl;
	}
	else {
		cout << N << endl;
	}
}