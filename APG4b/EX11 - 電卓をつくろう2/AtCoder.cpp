#include "pch.h"
#include "bits_stdc++.h"

using namespace std;
int main() {
	int N, A;
	cin >> N >> A;
	for (int i = 0; i < N; i++) {
		string op;
		int b;
		cin >> op >> b;
		if (op == "+") { A += b; }
		else if (op == "-") { A -= b; }
		else if (op == "*") { A *= b; }
		else if (op == "/" && b != 0) { A /= b; }
		else {
			cout << "error" << endl;
			break;
		}
		cout << i + 1 << ":" << A << endl;
	}
}