#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, t;
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

	// 부분합 중 최대값 구하기
	t = arr[m];
	for (int i = m + 1; i <= n; i++) {
		t = max(t, arr[i] - arr[i - m]);
	}

	// 결과 출력
	cout << t;

	return 0;
}