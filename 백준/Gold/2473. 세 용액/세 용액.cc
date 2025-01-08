#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//=====================================
int n, s1, s2;
ll mn, mnn;
ll arr[5000];
ll ans[3];
//=====================================

pair<int, int> solve(int t) {
	int l = t + 1, r = n - 1;
	mnn = 0x7f7f7f7f7f7f;

	// 투포인터
	while (l < r) {
		ll sum = arr[t] + arr[l] + arr[r];

		if (abs(mnn) > abs(sum)) {
			mnn = sum;
			s1 = l;
			s2 = r;
		}

		if (sum == 0)
			return { l, r };
		else if (sum < 0)
			l++;
		else
			r--;
	}

	return { s1, s2 };
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	mn = 0x7f7f7f7f7f7f;

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 정렬 필수
	sort(arr, arr + n);

	// 각 숫자마다 투포인터 탐색 수행
    // 세 용액이므로 적어도 3개가 있을때까지만 탐색
	for (int i = 0; i < n - 2; i++) {
		auto [idx1, idx2] = solve(i);

		if (abs(mn) > abs(arr[i] + arr[idx1] + arr[idx2])) {
			mn = arr[i] + arr[idx1] + arr[idx2];
			ans[0] = arr[i];
			ans[1] = arr[idx1];
			ans[2] = arr[idx2];
		}
	}

	// 오름차순 출력을 위한 정렬
	sort(ans, ans + 3);

	// 결과 출력
	cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];

	return 0;
}