#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in, up;
map<int, int> have;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		if (have.find(in) != have.end())
			have[in]++;
		else
			have[in] = 1;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> in;
		cout << have[in] << ' ';
	}

	return 0;
}