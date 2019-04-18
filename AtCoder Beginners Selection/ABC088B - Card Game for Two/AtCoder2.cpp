#include "pch.h"
#include "bits/stdc++.h"

#define F(i,N) for (int i = 0; i < n; i++)
using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin >> n;
	vector<int> arr(n);
	F(i, n) cin >> arr.at(i);
	sort(arr.begin(),arr.end());
	int a = 0, b = 0;
	F(i, N) {
		if (i % 2 == 0) a += arr.at(i);
		else b += arr.at(i);
	}
	cout << abs(a - b) << "\n";
	return 0;
}
