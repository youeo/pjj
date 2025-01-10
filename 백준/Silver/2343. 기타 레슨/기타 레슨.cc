#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
int arr[100'000];
//=====================================

int solve(int l, int r) {

	// 이분 탐색
	while (l <= r) {
		int mid = (l + r) / 2;
		int sum = 0, cnt = 0;

		// 각 크기마다 녹화 가능한 비디오 확인하기
		for (int i = 0; i < n; i++) {
			if (sum + arr[i] > mid) {
				sum = 0;
				cnt++;
			}
			sum += arr[i];
		}

		// 남은 블루레이 확인
		if (sum != 0) cnt++;

		// 블루레이의 개수가 가능한 개수를 넘으면 크기 키워주기
		if (cnt > m)
			l = mid + 1;
		else
			r = mid - 1;
	}

	// r과 같을때까지만 반복하고 최소를 찾아야하니 l을 사용
	return l;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int mn, mx = 0;

	cin >> n >> m;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mx += arr[i];
	}

	// 정렬 필수
	//sort(arr, arr + n);

	mn = *max_element(arr, arr + n);

	// 결과 출력
	cout << solve(mn, mx);

	return 0;
}