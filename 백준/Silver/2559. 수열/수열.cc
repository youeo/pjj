#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, t, result = -10000000;
int arr[100001], ck[100001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 배열 생성
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// 누적 합 계산
	for (int i = m; i <= n; i++) {
		ck[t] = arr[i];
		for (int j = 1; j < m; j++) {
			ck[t] += arr[i - j];
		}
		t++;
	}

	// 누적 합 중 최대값 구하기
	for (int i = 0; i < t; i++) {
		result = max(result, ck[i]);
	}

	// 결과 출력
	cout << result;

	return 0;
}