#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
int arr[10];
//=====================================

// N과M 수열 재귀 함수(3)
void nandm(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		arr[k] = i;
		nandm(k + 1);
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	nandm(0);

	return 0;
}