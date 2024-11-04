#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string in;
string have[10000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int count = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> have[i];
	}

	sort(have, have + n);

	for (int i = 0; i < m; i++) {
		cin >> in;
		if (binary_search(have, have + n, in))
			count++;
	}

	cout << count;
	return 0;
}