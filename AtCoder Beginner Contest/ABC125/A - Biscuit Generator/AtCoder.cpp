#include "bits/stdc++.h"
using namespace std;
int main() {
	int A, B, T;
	double N;
	cin >> A >> B >> T;
	N = T + 0.5;
	cout << (int)(N / A) *B << endl;
}