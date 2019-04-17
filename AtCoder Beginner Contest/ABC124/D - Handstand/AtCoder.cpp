#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

//累積和、尺取り法
int main() {

	cin.tie(0); ios::sync_with_stdio(false);

	int N, K;	cin >> N >> K;
	string s;	cin >> s;
	vector<int> Num;

	int now = 1;	//1か0の判別
	int cnt = 0;	//連続した数字の数

	//11101010110011
	//1-0-1-0-1-0-1-0-1
	//3-1-1-1-1-1-2-2-2
	for (int i = 0; i < N;i++) {
		if (s[i]==(char)('0'+now)) {
			cnt++;
		}
		else {
			Num.push_back(cnt);
			now = 1 - now; //1と0の切り替え
			cnt = 1;	//カウント初期化
		}
	}
	//1で終わるとき cut を出力
	if (cnt!=0) {Num.push_back(cnt);}

	for (int i = 0; i < Num.size(); i++) {
		cout << Num.at(i);
	}
	cout << endl;

	//偶数で終わらす
	//1-0-1-0の時
	//1-0-1-0-1にする
	if (Num.size()%2==0) {
		Num.push_back(0);
	}

	int add = 2 * K + 1;
	int ans = 0;	//最大値を求める

	//偶数番目だけ読む
	//K=2のとき
	//[3-1-1-1-1]-1-2-2-2
	//3-1-[1-1-1-1-2]-2-2	...
	for (int i = 0; i < Num.size(); i += 2) {

		int tmp = 0;	//合計計算
		int left = i;

		//オーバーフローしないように
		int right = min(i + add,(int)Num.size());

		for (int j = left; j < right; j++) {
			tmp += Num[j];
		}
		ans = max(tmp, ans);
	}

	cout << ans << endl;
}