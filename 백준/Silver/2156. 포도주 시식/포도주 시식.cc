#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, mmax;
int g[10001], arr[10001][3];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 포도주 용량 배열 생성
	for (int i = 1; i <= n; i++) {
		cin >> g[i];
	}

	// 초기값
	arr[0][1] = 0, arr[0][2] = 0;
	arr[1][1] = g[1], arr[1][2] = 0;
	arr[2][1] = g[2], arr[2][2] = g[1] + g[2];

	mmax = max({ arr[1][1], arr[1][2], arr[2][1], arr[2][2] });

	// 경우의 수 확인 (직전에 마심, 한 번 건너뜀, 두 번 건너뜀)
	for (int i = 3; i <= n; i++) {
		arr[i][1] = max({ arr[i - 2][1], arr[i - 2][2] , arr[i - 3][1], arr[i - 3][2] }) + g[i];
		arr[i][2] = arr[i - 1][1] + g[i];

		mmax = max({ mmax, arr[i][1], arr[i][2] });
	}

	// 결과 출력
	cout << mmax;

	return 0;
}