#include "pch.h"
#include "bits/stdc++.h"

typedef long long int lli;

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, A, B, C, D;
	string S;
	cin >> N >> A >> B >> C >> D >> S;
	S = "#" + S + "#";

	for (int i = A; i < C; i++)
	{
		if (S[i] == '#'&&S[i + 1] == '#') {
			cout << "No" << endl;
			return 0;
		}
	}
	for (int i = B; i < D; i++)
	{
		if (S[i] == '#'&&S[i + 1] == '#') {
			cout << "No" << endl;
			return 0;
		}
	}

	if (C < D) {
		cout << "Yes" << endl;
		return 0;
	}

	if (C > D) {
		for (int i = B; i <= D; i++)
		{
			if (S[i - 1] == '.'&&S[i] == '.'&&S[i + 1] == '.') {
				cout << "Yes" << endl;
				return 0;
			}
		}
		cout << "No" << endl;
		return 0;
	}

}