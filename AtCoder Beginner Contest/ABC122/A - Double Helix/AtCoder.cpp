#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {

	string s,t;
	cin >> s;
	if (s == "A") {t = "T";}
	if (s == "T") {t = "A";}
	if (s == "C") {t = "G";}
	if (s == "G") {t = "C";}
	cout << t << endl;
}