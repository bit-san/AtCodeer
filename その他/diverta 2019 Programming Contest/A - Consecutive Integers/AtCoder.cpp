#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
#define rep(i, n) for(int i = 1; i < (int)(n); i++)

using namespace std;
int main() {
	int N, K, res;
	cin >> N >> K;
	res = N - K + 1;
	cout << res << endl;
}
