#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, t;
int arr[100000];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	t = arr[0];
	for (int i = 1; i < n; i++) {
		// 연속합의 최대이므로 직전 값에 자신을 더한 것과 자신을 비교해서 큰 걸 찾아옴
		arr[i] = max((arr[i - 1]) + arr[i], arr[i]);
		// 끝까지 합한 값이 무조건 최대가 아니므로 중간 최대값을 보관해둠
		t = max(t, arr[i]);
	}

	// 결과 출력
	cout << t;

	return 0;
}