﻿#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int H, W, h, w;
	cin >> H >> W >> h >> w;

	cout << (H - h) * (W - w) << endl;
}
