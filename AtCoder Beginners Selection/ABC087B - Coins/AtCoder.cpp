#include "pch.h"
#include "bits_stdc++.h"

using namespace std;

int main(){
	int A, B, C, X;
	int count = 0;
	int total;

	/*	Aの入力 => 0からAまで
		Bの入力 => 0からCまで
		Cの入力 => 0からCまで	*/
	cin >> A >> B >> C >> X;
	
	/*	組み合わせ
		A=0			 : B=0			: C=0からCまで  =>  total==Xならカウント
		A=0			 : B=0からBまで : C=0からCまで  =>  total==Xカウント
		A=0からAまで : B=0からBまで : C=0からCまで  =>  total==Xカウント	*/
	for (int x = 0; x <= A; x++) {
		for (int y = 0; y <= B; y++) {
			for (int z = 0; z <= C; z++) {
				total = 500 * x + 100 * y + 50 * z; // 合計金額
				if (total == X) {
					count++; // 合計金額とXが同じならカウント
				}
			}
		}
	}
	cout << count << endl;
}