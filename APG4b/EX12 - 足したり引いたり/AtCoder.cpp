#include "pch.h"
#include "bits_stdc++.h"

using namespace std;

int main() {
	string s;
	cin >> s;

	// 計算結果
	int count = 1;

	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == '+'){
			count ++;
		}
		else if (s.at(i) == '-') {
			count --;
		}
	}
	cout << count << endl;
}