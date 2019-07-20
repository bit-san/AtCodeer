#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N; cin >> N;
	vector<pair<int,int> > ver(N);
	
	rep(i, N) { 
		cin >> ver[i].first; 
		ver[i].second = i;
	}

	vector<pair<int, int> > S = ver;
	sort(S.rbegin(), S.rend());

	rep(x,N) {
		rep(y,N) {
			if (ver[x]!=S[y]) {
				cout << S[y].first << endl;
				break;
			}
		}
	}
}
