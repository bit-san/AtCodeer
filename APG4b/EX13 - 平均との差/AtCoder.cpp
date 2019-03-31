#include "pch.h"
#include "bits_stdc++.h"
#include <iostream>

using namespace std;

int main() {
	
	int N;
	int sum = 0;	// 合計点

	cin >> N;
	// N要素の配列
	vector<int> vec(N);
	// 入力処理
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	// 合計点を計算
	for (int i = 0; i < N; i++) {
		sum = sum + vec.at(i);
	}
	cout << "合計:" << sum << endl;

	
	// 平均点
	int mean = sum / N;
	// 平均点から何点離れているかを計算して出力
	for (int i = 0; i < N; i++) {

		if (vec.at(i) < mean) {
			vec.at(i) = mean - vec.at(i);
		}
		else {
			vec.at(i) = vec.at(i) - mean;
		}
		cout << i+1 << ":" << vec.at(i) << endl;
	}
}