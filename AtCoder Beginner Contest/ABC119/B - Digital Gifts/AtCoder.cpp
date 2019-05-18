#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int N;
	double x,res = 0;
	string S;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> S;
		if (S == "JPY") {
			res = res + x;
		}
		else if (S == "BTC") {
			res = res + (double)(x)* 380000.0;
		}
	}
	cout << res << endl;
}
