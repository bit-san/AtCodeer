#include "bits/stdc++.h"

typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;
int main() {
	int N, ans = 0, tmp = 0;
	cin >> N;
	for (int i = 1; i <= N; i += 2) {
		tmp = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) { tmp++; }
		}
		if (tmp == 8) { ans++; }
	}
	cout << ans << endl;
}
