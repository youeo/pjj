#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
int arr[10];
bool check[10];
//=====================================

// N과M 수열 재귀 함수(2)
void nandm(int k, int idx) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = idx; i <= n; i++) {
		if (!check[i]) {
			arr[k] = i;
			check[i] = true;
			nandm(k + 1, i + 1); // 시작 위치를 점점 뒤로 밀어주기
			check[i] = false;
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	nandm(0, 1);

	return 0;
}