#include "pch.h"
#include "bits/stdc++.h"

typedef long long int ll;

using namespace std;

int main() {
	int r, D, res = 0, sum, x, A;
	cin >> r >> D >> x;
	A = x;
	for (int i = 1; i < 11; i++)
	{
		sum = r * A - D;
		A = sum;
		cout << sum << endl;
	}
}