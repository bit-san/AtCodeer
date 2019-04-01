#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int A, B, C,max,min;
	cin >> A >> B >> C;
	vector<int> vec = { A,B,C };
	sort(vec.begin(), vec.end());
	min = vec.at(0);
	reverse(vec.begin(), vec.end());
	max = vec.at(0);
	cout << max - min <<endl;
}