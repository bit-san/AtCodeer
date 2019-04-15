#include "pch.h"
#include "bits/stdc++.h"

//部分点

using namespace std;
int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<char>> str(H, vector<char>(W));

	for (int x = 0; x < H; x++) {
		for (int y = 0; y < W; y++) {
			cin >> str.at(x).at(y);
		}
	}

	int i = 0, j = 0;
	bool a = false, b = false;
	while (1) {
		if (j + 1 < W) {
			if (str.at(i).at(j + 1) == '.') {
				j++;
				a = true;
			}
			else if (str.at(i).at(j + 1) == '#') {
				j;
				a = false;
			}
		}
		if (i == H - 1 && j == W - 1) {
			cout << "Yay!" << endl;
			break;
		}
		else if (a == false) {
			cout << ":(" << endl;
			break;
		}

	}
}

