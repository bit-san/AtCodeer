#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int gcd(int $a,int $b) {
	if ($b == 0) {return $a;}
	return gcd($b, $a % $b);
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<int> ver(N);
	
	cin >> ver[0];
	int g = ver[0];
	for (int i = 1; i < N; i++) {
		cin >> ver[i];
		g = gcd(g, ver[i]);
	}

	cout << g << endl;
}