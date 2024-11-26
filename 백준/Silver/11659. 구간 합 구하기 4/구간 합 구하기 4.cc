#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, x, y;
int arr[100001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 배열 생성
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// 누적 합 계산
	for (int i = 1; i <= n; i++) {
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < m; i++) {
		cin >> x >> y;

		// 결과 출력
		cout << arr[y] - arr[x - 1] << "\n";
	}

	return 0;
}