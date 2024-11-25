#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
long long mmax = 0;
long long arr[501][501];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 삼각형 배열 생성
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	// 각 경로별 값 저장
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + arr[i][j];
		}
	}

	// 결과 출력
	cout << *max_element(arr[n], arr[n] + n + 1);

	return 0;
}