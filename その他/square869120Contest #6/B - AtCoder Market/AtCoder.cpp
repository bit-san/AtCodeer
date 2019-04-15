#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

long long N, A[100], B[100], minx = 1e11;

//全探索
long long solve(int p1, int p2) {
	long long V1 = 0;
	for (int i = 1; i <= N; i++) {
		//絶対値を求める
		V1 += abs(p1 - A[i]);
		V1 += abs(A[i] - B[i]);
		V1 += abs(B[i] - p2);
	}
	return V1;
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> A[i] >> B[i];
	}
	cout << minx << endl;
	vector<long long>E;
	for (int i = 1; i <= N; i++) {
		E.push_back(A[i]);
	}
	for (int i = 1; i <= N; i++) {
		E.push_back(B[i]);
	}

	//拡張for文
	for (long long v1 : E) {
		for (long long v2 : E) {
			minx = min(minx, solve(v1, v2));
		}
	}
	cout << minx << endl;
	return 0;
}


