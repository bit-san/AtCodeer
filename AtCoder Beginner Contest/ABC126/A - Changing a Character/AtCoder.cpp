#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int N, K;
	string S;
	cin >> N >> K >> S;
	K = K - 1;
	if (S[K] == 'A') {
		S[K] = 'a';
	}
	else if (S[K] == 'B') {
		S[K] = 'b';
	}
	else if (S[K] == 'C') {
		S[K] = 'c';
	}
	cout << S << endl;
}
