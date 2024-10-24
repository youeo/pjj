#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int x = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) { x++; }
		if (x == k) { x = i; break; }
	}

	if (x == 0 || x < k) { cout << '0'; }
	else { cout << x; }
}