#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int N, Y;
	cin >> N >> Y;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			for (int k = 0; k <= N; k++)
			{
				if ((N==i+j+k)&&(Y == (i*10000+j*5000+k*1000))) {
					cout << i << " " << j << " " << k << endl;
					return 0;
				}
			}
		}
	}

	cout << -1 << " " << -1 << " " << -1 << endl;

	
}
