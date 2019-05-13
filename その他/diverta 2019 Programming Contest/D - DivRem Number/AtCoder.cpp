#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	ll N, k, m, res = 0;
	cin >> N;
	for (ll i = 1; i < sqrt(N)+1 ; i++)
	{
		if (N % i == 0) {
			m = (N / i) - 1;
			if (m > i) { res += m; }
		}
	}
	cout << res << endl;
}
