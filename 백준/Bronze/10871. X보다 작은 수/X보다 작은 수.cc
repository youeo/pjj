#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, a[10000], j=0;
	cin >> n >> x;
	vector<int> c(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		if (a[i] < x) { c[j++] = a[i]; }
	}
	for (int i = 0;i < j;i++) {
		cout << c[i] << " ";
	}
}