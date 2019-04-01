#include "pch.h"
#include "bits_stdc++.h"

using namespace std;

// #defineで同じ処理を一つにまとまる
#define r(i,n) for(int i=0;i<=n;i++)
int a, b, c, r, x;
int main() { 
	std::cin >> a >> b >> c >> x;
	r(i, a) {
		r(j, b) {
			r(k, c) {
				//合計 != Xですか ? true:false
				i * 10 + j * 2 + k != x / 50 ? r:r++;
			}
		}
	}
	std::cout << r; 
}