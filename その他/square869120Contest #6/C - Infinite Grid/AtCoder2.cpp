#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int H, W, dp[109][1509];
char c[109][1509];

int main() {
	cin >> H >> W;
	assert((1 <= H && H <= 100)&&(1 <= W && W <= 100));

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> c[i][j];
		}
	}

	//マス目を横につなげる
	for (int i = 0; i < H; i++) {
		for (int j = W; j < 15 * W; j++) {
			c[i][j] = c[i][j % W];
		}
	}
	
	/*
	cout << endl;
	for (int i = 0; i < H; i++) {
		for (int j = W; j < 15 * W; j++) {
			cout << c[i][j];
		}
		cout << endl;
	}
	cout << endl;
	*/
	

	//[#]の時 = 0 , [.]の時 = 1
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= 15 * W; j++) {
			if (c[i-1][j-1] == '#') {
				dp[i][j] = 0;
			}
			//[.]だった場合
			else {
				//初期位置:左上
				if (i == 1 && j == 1) {
					dp[i][j] = 1;
				}
				else {
					//通った道で[.]だった場所
					//左に戻るか上に戻るか
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

				}
			}
		}
	}

	/*
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= 15 * W; j++) {
			cout << dp[i][j];
		}
		cout << endl;
	}
	*/

	if (dp[H][15 * W] == 1) {
		cout << "Yay!" << endl;
	}
	else {
		cout << ":(" << endl;
	}
	return 0;
}
