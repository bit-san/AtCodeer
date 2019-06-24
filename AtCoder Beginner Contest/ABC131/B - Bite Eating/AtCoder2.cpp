#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;
typedef long long int lli;
const int MOD = 1000000007;
#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	int N, A, eat; cin >> N >> A;
	
	int R = A + N - 1;
	int L = A;

	if (R <= 0) { eat = R; }
	else if (L >= 0) { eat = L; }
	else { eat = 0; }

	cout << (R+L)*(R-L+1) / 2 - eat << endl;
}