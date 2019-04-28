#include "pch.h"
#include "bits/stdc++.h"

template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
using namespace std;

//最大公約数を求める
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main(void) {
	int N, res = 0;
	cin >> N;
	vector<int> A(N);
	vector<int> L(N + 1, 0);	//左から累積
	vector<int> R(N + 1, 0);	//右から累積
	for (int i = 0; i < N; i++) { cin >> A[i]; }

	//累積(左と右から)
	for (int i = 0; i < N; i++) { L[i + 1] = gcd(L[i], A[i]); }
	for (int i = N - 1; i >= 0; i--) { R[i] = gcd(R[i + 1], A[i]); }

	//集計
	for (int i = 0; i < N; i++) { chmax(res, gcd(L[i], R[i + 1])); }
	cout << res << endl;
	return 0;
}
