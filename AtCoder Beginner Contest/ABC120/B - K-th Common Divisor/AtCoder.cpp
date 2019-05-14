#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int A, B, K, res;
	cin >> A >> B >> K;
	for (int i = min(A,B); i >= 1 ; i--)
	{
		if (A%i==0 && B%i==0) {
			K--;
			if (K==0) {
				cout << i << endl;
			}
		}
	}
}
