#include <bits/stdc++.h>
using namespace std;

//=====================================
int a0, a1, c, n0, f;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a1 >> a0 >> c >> n0;


	for (int i = n0; i <= 100; i++) {
		f = (a1 * i) + a0;
		if (f > (i * c)) { cout << 0; return 0; }
	}

	cout << 1;
}