#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int N = 5;

	//注文してから届く時間
	vector<int> Time = { a,b,c,d,e };//入力した数字が入る場所
	//注文してから次に注文できるまでの時間
	vector<int> nextTime(N);//10の倍数にした時間が入る場所

	//並べ替え
	for (int i = 0; i < N; i++) {
		if (Time[i] % 10 == 0) {
			nextTime[i] = Time[i];
		}
		else {
			//一の位を切り捨て10の倍数にする
			nextTime[i] = Time[i] - Time[i] % 10 + 10;
		}
	}

	int BestTime = 999999999;//最小の時間
	for (int i = 0; i < N;i++) {
		int SumeTime = 0;//合計
		for (int j = 0; j < N; j++) {
			if (i==j) {
				//最後の処理
				SumeTime += Time[j];
			}
			else {
				//最後以外の処理
				SumeTime += nextTime[j];
			}
		}
		BestTime = min(BestTime, SumeTime);
	}
	cout << BestTime << endl;
	return 0;
}