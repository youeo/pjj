#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//=====================================
int k, n;
int arr[10005];
//=====================================

// parametric search 활용
int cut(ll t) {
	ll cur = 0;

	// 각 랜선을 동일한 길이로 잘라서 더해줌
	for (int i = 0; i < k; i++)
		cur += arr[i] / t;

	// 해당 길이로 자른 모든 랜선의 갯수가 n개 이상이면 true
	return cur >= n;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> k >> n;

	// 배열 생성
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}

	ll st = 1, en = 0x7fffffff;

	while (st < en) {
		ll mid = (st + en + 1) / 2;

		// 최대 랜선 길이를 구해야 하므로 true면 그 이상으로 계속 검사
		if (cut(mid)) st = mid;
		else en = mid - 1;
	}

	// 결과 출력
	// true로 걸리는 지점까지만 가능한 지점이므로 st 출력
	cout << st;

	return 0;
}