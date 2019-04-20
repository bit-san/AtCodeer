#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int A, B, C;
	cin >> A >> B >> C;
	if ((A <= C && C <= B) || (A >= C && B <= C)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
