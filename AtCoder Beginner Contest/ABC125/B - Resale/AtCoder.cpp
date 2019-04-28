#include "pch.h"
#include "bits/stdc++.h" 
using namespace std;
int main() {
	int N, res, S = 0;
	cin >> N;

	vector<int> V(N);
	vector<int> C(N);
	vector<int> X(N);

	for (int i = 0; i < N; i++) {cin >> V.at(i);}
	for (int i = 0; i < N; i++) {cin >> C.at(i);}
	for (int i = 0; i < N; i++) {
		res = V.at(i) - C.at(i);
		if (res < 0) X.at(i) = 0;
		else X.at(i) = res;
	}
	for (int i = 0; i < N; i++) {S = S + X.at(i);}
	cout << S << endl;
}
