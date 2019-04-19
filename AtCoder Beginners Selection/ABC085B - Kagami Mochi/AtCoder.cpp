#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n;i++) {
		cin >> arr.at(i);
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(), arr.end());
	int cunt = 1;
	for (int i = 0; i < arr.size()-1; i++) {
		if (arr.at(i)> arr.at(i+1)) {
			cunt++;
		}
	}
	cout << cunt << endl;
}
