#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A.at(i) >> B.at(i);
	}

	vector<vector<char>> vec (N,vector<char>(N,'-'));

	/*	\,1,2,3			\,0,1,2
		1,-,-,-			0,-,-,-
		2,-,-,-		=>	1,-,-,-
		3,-,-,-			2,-,-,-

		1〜N → 0〜N-1 に変換		*/

	for (int i = 0; i < M; i++) {
		A.at(i)--;
		B.at(i)--;
		vec.at(A.at(i)).at(B.at(i)) = 'o';
		vec.at(B.at(i)).at(A.at(i)) = 'x';
	}
	
	for (int x = 0; x < N;x++) {
		for (int y = 0; y < N; y++) {
			cout << vec.at(x).at(y);
			if (y == N - 1) {
				cout << endl;
			}
			else {
				cout << " ";
			}
		}
	}
}