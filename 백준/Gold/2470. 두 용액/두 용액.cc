#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//=====================================
int n, x;
ll arr[100'000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	ll min = 0x7f7f7f7f7f7f;

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 정렬 필수
	sort(arr, arr + n);

	// 투 포인터
	int st = 0, en = n - 1;
	ll s1 = 0, s2 = 0;

	// 각 조건에 따라 포인터 이동
	while (st != en) {
		ll sum = arr[st] + arr[en];

		if (abs(sum) <= abs(min)) {
			min = sum;
			s1 = arr[st];
			s2 = arr[en];
		}

		// 더한 값이 0보다 작으면 큰 값으로 이동해야 함
		// 더한 값이 0보다 크면 작은 값으로 이동해야 함
		if (sum < 0)
			st++;
		else
			en--;
	}

	// 결과 출력
	cout << s1 << ' ' << s2;

	return 0;
}