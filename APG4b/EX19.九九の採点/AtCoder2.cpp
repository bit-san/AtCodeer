#include "pch.h"
#include "bits/stdc++.h"

#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

void saiten(vector<vector<int>> &a, int &cc,int &wc){
	r(x, 9){r(y, 9){
			if (a.at(x).at(y) == (x+1)*(y+1)) {cc++;}
			else {
				a.at(x).at(y) = (x + 1)*(y + 1);
				wc++;
			}
		}
	}
}

int main() {
	vector<vector<int>> A(9, vector<int>(9));
	r(i,9) {r(j,9) {cin >> A.at(i).at(j);}}
	int correct_count = 0;
	int wrong_count = 0;
	saiten(A, correct_count, wrong_count);
	r(i,9){r(j,9) {
			cout << A.at(i).at(j);
			if (j < 8) cout << " ";
			else cout << endl;
		}
	}
	cout << correct_count << endl;
	cout << wrong_count << endl;
}