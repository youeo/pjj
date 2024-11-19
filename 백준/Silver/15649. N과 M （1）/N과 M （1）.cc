#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
int arr[10];
bool check[10];
//=====================================

// N과M 수열 재귀 함수(1)
void nandm(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			arr[k] = i;
			check[i] = true;
			nandm(k + 1);
			check[i] = false;
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	nandm(0);

	return 0;
}