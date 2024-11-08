#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, a, b;
int mn, mx;
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	while (n--) {
		cin >> a >> b;
		mn = min(a, b);
		mx = max(a, b);
		for (int i = 0; i <= a * b; i += mn) {
			if (i % mx == 0 && i != 0) {
				cout << i << "\n";
				break;
			}
		}
	}

	return 0;
}