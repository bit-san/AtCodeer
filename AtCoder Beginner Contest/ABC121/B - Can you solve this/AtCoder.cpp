#include "pch.h"
#include "bits/stdc++.h"

using namespace std;
int main() {
	int N, M, C, cunt = 0;
	cin >> N >> M >> C;
	vector<int> B(M);
	vector<int> A(M);
	for (int i = 0; i < M; i++)	{cin >> B.at(i);}

	for (int i = 0; i < N; i++) { 
		int res = 0;
		for (int x = 0; x < M; x++) { cin >> A.at(x); }
		for (int y = 0; y < M; y++) { 
			res = res + A.at(y)*B.at(y);
		}
		if (res+C >0) {
			cunt++;
		}
	}
	cout << cunt << endl;
}
