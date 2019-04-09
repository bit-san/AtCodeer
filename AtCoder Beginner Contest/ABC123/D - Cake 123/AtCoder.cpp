#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int X, Y, Z, K;
	cin >> X >> Y >> Z >> K;
	vector<long long> A(X), B(Y), C(Z);

	for (int i = 0; i < X; i++) { cin >> A[i]; }
	for (int j = 0; j < Y; j++) { cin >> B[j]; }
	for (int k = 0; k < Z; k++) { cin >> C[k]; }

	sort(A.begin(),A.end());
	reverse(A.begin(), A.end());
	sort(B.begin(), B.end());
	reverse(B.begin(), B.end());
	sort(C.begin(), C.end());
	reverse(C.begin(), C.end());

	vector<long long> ABC;

	//A[X],B[Y],C[Z]をABC[]にまとめる
	for (int a = 0; a < X; a++) {
		for (int b = 0; b < Y; b++) {
			//Kより多くならないか確認
			//+1は配列が0から始まっているので1を足す
			if ((a + 1) * (b + 1) > K) {
				break;
			}
			for (int c = 0; c < Z; c++) {
				if ((a + 1) * (b + 1) * (c + 1) > K) {
					break;
				}
				ABC.push_back(A[a] + B[b] + C[c]);
			}
		}
	}

	sort(ABC.begin(), ABC.end());
	reverse(ABC.begin(), ABC.end());

	for (int i = 0; i < K;i++) {
		cout << ABC.at(i) << endl;
	}

}