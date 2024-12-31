#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, x, cnt;
int arr[100000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 정렬 필수
	sort(arr, arr + n);

	cin >> x;

	// 투 포인터
	int st = 0, en = n - 1;

	// 각 조건에 따라 포인터 이동
	while (st < en) {
		int sum = arr[st] + arr[en];

		if (sum == x) {
			cnt++;
			st++;
			en--;
		}
		else if (sum > x) {
			en--;
		}
		else {
			st++;
		}
	}

	// 결과 출력
	cout << cnt;

	return 0;
}