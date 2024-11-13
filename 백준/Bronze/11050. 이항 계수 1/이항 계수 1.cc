#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k;
//=====================================

int factorial(int i) {
	if (i == 0) return 1;
	return i * factorial(i - 1);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}