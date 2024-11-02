#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
int arr[1000000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 만들기
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 오름차순 정렬
	sort(arr, arr + n);

	// 결과 출력
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << "\n";
	}
	cout << arr[n - 1];
	return 0;
}