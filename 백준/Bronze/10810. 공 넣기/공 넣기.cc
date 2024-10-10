#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, s, e, b, a[101] = {0};
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		cin >> s >> e >> b;
		for (int j = s - 1; j < e; j++) {
			a[j] = b;
		}
	}
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}