#include "pch.h"
#include "bits/stdc++.h"

using namespace std;
const int inf = 1012345678;

int main() {
	vector<int> A(5);
	cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];//注文から届く時間
	vector<int> P = { 0, 1, 2, 3, 4 };
	int final_answer = inf; //最小の時間
	do {
		int ans = 0;	//かかる時間の合計
		for (int i = 0; i < 5; ++i) {
			while (ans % 10 != 0) { 
				ans += 1; 
			}
			//P[i]は変化したパターンの数字
			ans += A[P[i]];
		}
		final_answer = min(final_answer, ans);
	} while (next_permutation(P.begin(), P.end()));
	//next_permutation：順列生成 全てのパターンを生成する
	cout << final_answer << endl;
	return 0;
}