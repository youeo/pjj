#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
int arr[10];
bool check[10];
//=====================================

// N과M 수열 재귀 함수(4)
void nandm(int k, int idx) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = idx; i <= n; i++) {
		arr[k] = i;
		nandm(k + 1, i); // 같은 수 중복 사용 가능, 중복 조합 불가능
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	nandm(0, 1);

	return 0;
}