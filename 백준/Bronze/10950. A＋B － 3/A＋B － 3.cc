#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a[100], b[100], c[100];
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i] >> b[i];
		c[i] = a[i] + b[i];
	}
	for (int i = 0; i < n; i++) {
		cout << c[i] << '\n';
	}
}