#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, d3, d5;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int m = 5000;

	cin >> n;

	for (int i = 0; i <= n; i++) {
		if (i >= 3 && i % 3 == 0) { d3 = i / 3; }
		if ((n - i) >= 5 && (n - i) % 5 == 0) { d5 = (n - i) / 5; }

		if (d3 * 3 + d5 * 5 == n && m >= d3 + d5) { m = d3 + d5; }
		d3 = 0;
		d5 = 0;
	}

	if (m == 5000) { m = -1; }
	cout << m;
	return 0;
}