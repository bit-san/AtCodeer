#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;
int main() {
	int N, AB = 0, BXX = 0, XXA = 0, BXA = 0;
	cin >> N;
	string S[10000];
	for (int i = 0; i < N; i++){cin >> S[i];}

	//文字列　最初<=S<=最後 のABを数える
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < S[i].size()-1; j++)
		{
			if (S[i][j] == 'A'&&S[i][j + 1] == 'B') { AB++; }
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (S[i][0] == 'B'&& S[i][S[i].size() - 1] == 'A') {BXA++;}
		else if (S[i][0] == 'B') { BXX++; }
		else if (S[i][S[i].size() - 1] == 'A') { XXA++; }
	}

	if (BXA == 0) { cout << min(XXA, BXX) + AB << endl; }
	else if (XXA + BXX == 0) { cout << BXA - 1 + XXA + AB << endl; }
	else { cout << BXA + min(XXA, BXX) + AB << endl; }
}
