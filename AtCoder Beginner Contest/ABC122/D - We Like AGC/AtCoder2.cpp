#include "pch.h"
#include "bits/stdc++.h"
using namespace std;

/*	
	使うアルゴリズム...DP：動的計画法(計算をまとめる)

	A=0,G=1,C=2,T=3
	文字0~3
	駄目な条件：AGC,ACG,GAC,A?GC,AC?G ... 5個
	最後とその前の3文字がわかればいい
		=> ??...?[???]{?}
*/

int dp[100][4][4][4];
int mod = 1E9+7;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N;
	cin >> N;

	//長さ0の文字列は1
	//0,1,2に関する制約しかない
	//Sは、333Sと考えても問題なし
	dp[0][3][3][3] = 1;

	//文字列の文字列
	for (int len = 0; len < N; len++) {
		//最後から3文字目
		for (int i = 0; i < 4; i++) {
			//最後から2文字目
			for (int j = 0; j < 4; j++) {
				//最後から1文字目
				for (int k = 0; k < 4; k++) {
					if (dp[len][i][j][k] == 0) continue;
					//新しく追加する文字
					for (int m = 0; m < 4; m++) {
						
						//A=0,G=1,C=2,T=3
						//[i][j][k][m]
						// ?  A  G  C
						if (j == 0 && k == 1 && m == 2) continue;
						// ?  G  A  C
						if (j == 1 && k == 0 && m == 2) continue;
						// ?  A  C  G
						if (j == 0 && k == 2 && m == 1) continue;
						// A  ?  G  C
						if (i == 0 && k == 1 && m == 2) continue;
						// A  G  ?  C
						if (i == 0 && j == 1 && m == 2) continue;


						//S = ........ i j k
						//nextS = ...... j k m
						dp[len + 1][j][k][m] += dp[len][i][j][k];
						dp[len + 1][j][k][m] %= mod;
					}
				}
			}
		}
	}

	//合計を求める
	int res = 0;
	//最後から1文字目
	for (int i = 0; i < 4; i++) {
		//最後から2文字目
		for (int j = 0; j < 4; j++) {
			//最後から3文字目
			for (int k = 0; k < 4; k++) {
				res += dp[N][i][j][k];
				res %= mod;
			}
		}
	}
	cout << res << endl;
}
