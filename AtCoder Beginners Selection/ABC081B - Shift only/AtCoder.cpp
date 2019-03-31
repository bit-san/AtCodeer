#include "pch.h"
#include "bits_stdc++.h"
#include <iostream>
using namespace std;

int N;         //黒板に何個数字があるか
int A[210];     //最大200

int main() {

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	int count = 0;  //何回操作できたか

	// 無限ループ
	while (1) {
		bool flag = false;  // false:偶数  true:奇数
		for (int i = 0; i < N; ++i) {
			if (A[i] % 2 != 0) {
				flag = true;   // 奇数があったらフラグを立てる
			}
			else {
				A[i] /= 2;  //A[i] = A[i]/2 確認
			}
		}
		if (flag) {
			break;  // 奇数があったらループから脱出
		}
		count++;  // 操作回数を増やす
	}
	cout << count << endl;
}