#include "pch.h"
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

vector<vector<pair<int, int>>> G;
vector<int> res;

// v を c に塗る。p は v の親
// ツリー探索
void dfs(int v, int p, int c) {
	res[v] = c;	//cは色
	for (auto e : G[v]) {
		if (e.first == p) {continue;}
		//奇数だったら、次のノードは異色 1 - c で塗る
		if (e.second & 1) { dfs(e.first, v, 1 - c); }
		//偶数だったら、次のノードも同色 c で塗る
		else { dfs(e.first, v, c); }
	}
}

int main() {
	int N;
	cin >> N;
	G.assign(N, vector<pair<int, int>>());	//再代入

	for (int i = 0; i < N - 1; ++i) {
		int u, v, w; 
		cin >> u >> v >> w;
		--u, --v;
		G[u].push_back(pair<int, int>(v, w));
		G[v].push_back(pair<int, int>(u, w));
	}
	res.assign(N, 0);
	dfs(0, -1, 1);
	for (auto v : res) {
		cout << v << endl;
	}
}