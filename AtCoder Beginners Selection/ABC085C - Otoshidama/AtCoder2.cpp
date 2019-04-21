#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

//TLE
int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, Y, Z;
	cin >> N >> Y;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			Z = N - i - j;
			if ((Z >= 0) && (Y == (i * 10000 + j * 5000 + Z * 1000))) {
				cout << i << " " << j << " " << Z << endl;
				return 0;
			}
		}
	}

	cout << -1 << " " << -1 << " " << -1 << endl;


}
