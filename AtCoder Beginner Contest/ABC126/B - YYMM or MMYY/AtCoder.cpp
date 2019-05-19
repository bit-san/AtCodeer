#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;
int main() {
	int S, Y, M;
	cin >> S;

	Y = S / 100;
	M = S % 100;
	//cout << Y << " " << M << endl;

	if (Y > 12 && M > 12 || Y > 12 && M == 0 || Y == 0 && M > 12 || Y == 0 && M == 0) {
		cout << "NA" << endl;
	}
	else if (M > 0 && Y > 0 && M < 13 && Y < 13) {
		cout << "AMBIGUOUS" << endl;
	}
	else if (M < 13 && 0 < M) {
		cout << "YYMM" << endl;
	}
	else if (Y < 13 && 0 < Y) {
		cout << "MMYY" << endl;
	}
}
