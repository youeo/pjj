#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, min=1000000, max=-1000000;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a;
		if (a < min) { min = a; }
		if (a > max) { max = a; }
	}
	cout << min << " " << max;
}