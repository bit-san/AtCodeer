#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int N,res=0,A=0,B=0;
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++)
	{
		if (S.at(i) == '1') { A++; }
		if (S.at(i) == '0') { B++; }
	}
	res = 2 * min(A, B);
	cout << res << endl;
}
