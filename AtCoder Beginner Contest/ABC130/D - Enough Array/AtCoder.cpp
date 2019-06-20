#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

//尺取り法
int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N; lli K; cin >> N >> K;
	vector<ll> ver(N);
	rep(i, N) { cin >> ver[i]; }

	ll res = 0, right = 0, sum = 0;
	rep(left,N){
		while (right < N && sum < K) {
			sum += ver[right];
			right++;
		}
		if (sum < K) break;

		res += (long long)(N - right + 1);

		if (right == left) right++;
		else sum -= ver[left];
	}
	cout << res << endl;
}