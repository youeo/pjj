#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, x;
bool flag = 0;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int ct = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		for (int i = 2; i < x; i++) {
			if (x % i == 0) { flag = 1; break; }
		}
		if (x != 1 && flag == 0) { ct++; }
		flag = 0;
	}

	cout << ct;
}