#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;
int main() {
	int N, M, num = 0;
	ll res = 0;
	cin >> N >> M;
	vector<pair<ll,ll>> AB(N);

	rep(i,N){
		cin >> AB.at(i).first >> AB.at(i).second;
	}
	sort(AB.begin(), AB.end());

	rep(i, N) {
		int cunt = 0;
		while (cunt < AB.at(i).second) {
			if (num < M) {
				res += AB.at(i).first;
				num++;
				cunt++;
			}
			else if (num == M) break;
		}
		if (num == M) break;
	}
	cout << res << endl;
}
