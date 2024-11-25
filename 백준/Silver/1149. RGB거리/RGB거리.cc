#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
int arr[1001][3], r[1000], g[1000], b[1000];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> r[i] >> g[i] >> b[i];
	}

	arr[1][0] = r[1], arr[1][1] = g[1], arr[1][2] = b[1];

	for (int i = 2; i <= n; i++) {
		// 직전 집의 색과 같지 않기만 하면 되므로 직전에 다른 색으로 칠한 집의 최소 비용과 더해서 최소값 저장
		arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + r[i];
		arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + g[i];
		arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + b[i];
	}

	// 결과 출력
	cout << min({ arr[n][0], arr[n][1], arr[n][2] });

	return 0;
}