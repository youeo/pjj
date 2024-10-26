#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, c;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int q = 0, d = 0, ni = 0, p = 0;

		cin >> c;

		if (c != 0) {
			q = c / 25;
			c %= 25;
		}
		if (c != 0) {
			d = c / 10;
			c %= 10;
		}
		if (c != 0) {
			ni = c / 5;
			c %= 5;
		}
		if (c != 0) {
			p = c / 1;
		}

		cout << q << ' ' << d << ' ' << ni << ' ' << p;
		if (i != n - 1) { cout << "\n"; }
	}
}