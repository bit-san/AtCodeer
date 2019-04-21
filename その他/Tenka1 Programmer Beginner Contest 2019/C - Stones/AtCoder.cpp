#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int N;
	string S;
	cin >> N >> S;

	int white = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] == '.') {
			white++;
		}
	}//白の数を数える

	/*各境目に対して
	それより左にある黒い石の個数と
	それより右にある白い石の個数の最小値*/
	int ans = min(white, N - white);

	int right_white = white;//境目より右側にある白の数
	int left_black = 0;//境目より左側にある黒の数

	//白白...黒黒
	for (int i = 0; i < N; i++) {
		ans = min(ans, right_white + left_black);
		if (S[i] == '#') {
			left_black++;
		}
		else {
			right_white--;
		}

		//5(境目：2)
		//#.##.
		//21110	白
		//11233 黒

	}
	cout << ans << endl;
}
