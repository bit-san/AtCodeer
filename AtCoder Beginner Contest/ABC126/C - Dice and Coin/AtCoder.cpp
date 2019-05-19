#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int main() {
	long double N, K, res = 0.0, A, ten;
	cin >> N >> K;
	A = 1.0 / N;
	for (int i = 1; i <= N; i++)
	{
		double cunt = 0;
		ten = (double)i;
		while (ten < K)
		{
			ten = ten * 2.0;
			cunt++;
		}
		res = res + A * pow(1.0 / 2.0, cunt);
	}
	cout << setprecision(12) << res << endl;
}