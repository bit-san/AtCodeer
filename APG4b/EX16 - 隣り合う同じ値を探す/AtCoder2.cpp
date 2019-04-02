#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	vector<int> data(5);
	bool handan=false;
	for (int i = 0; i < 5; i++) {
		cin >> data.at(i);
	}
	//0と1、1と2、2と3、3と4　よって0<i<4
	for (int i = 0; i < 4; i++) {
		if (data.at(i) == data.at(i+1)) {
			handan = true;
		}
	}
	
	if (handan == true) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}