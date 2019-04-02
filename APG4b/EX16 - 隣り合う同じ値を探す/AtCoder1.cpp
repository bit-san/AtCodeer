#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	vector<int> data(5);
	bool handan=false;
	for (int i = 0; i < 5; i++) {
		cin >> data.at(i);
	}

	if (data.at(0) == data.at(1)) {
		handan = true;
	}
	if (data.at(1) == data.at(2)) {
		handan = true;
	}
	if (data.at(2) == data.at(3)) {
		handan = true;
	}
	if (data.at(3) == data.at(4)) {
		handan = true;
	}
	if (handan == true) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}