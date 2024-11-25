#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int arr[1000001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 초기값
	arr[1] = 0;

	// 1이 되는 최소의 방법 찾기
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;

		// i가 3과 2 둘 다 나눠질 수 있으므로 else X
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
	}

	// 결과 출력
	cout << arr[n];

	return 0;
}