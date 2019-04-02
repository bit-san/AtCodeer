#include "pch.h"
#include "bits/stdc++.h"

#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
	int N, S,count=0;
	cin >> N >> S;
	vector<int> A(N), P(N);
	r(i,N){cin >> A.at(i);}
	r(i,N){cin >> P.at(i);}

	// リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
	// ここにプログラムを追記
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < P.size(); j++) {
			if (S == A.at(i) + P.at(j)) {count++;}
		}
	}
	cout << count << endl;
}