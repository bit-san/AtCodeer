#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, A[200], cunt = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	
	while (1) {
		for (int i = 0; i < N; i++)
		{
			if (A[i] % 2 != 0) {
				cout << cunt << endl;
				return 0;
			}
			else {
				A[i] /= 2;
			}
		}
		cunt++;
	}
}
