#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	tuple<string,int,int> p[100];

	int A, T; cin >> A;
	string S;
	for (int i = 0; i < A; i++) {
		cin >> S >> T;
		p[i] = make_tuple(S, -T, i);
	}
	sort(p, p + A);
	for (int i = 0; i < A; i++) {
		int a = get<2>(p[i]);
		cout << a + 1 << endl;
	}
}