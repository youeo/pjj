#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, result = 0, sum = 0;
int arr[1000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

    // 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 오름차순 정렬
	sort(arr, arr + n);

	// 인출 시간 구하기
	for (int i = 0; i < n; i++) {
		sum = arr[i] + sum;
		result += sum;
	}

	// 결과 출력
	cout << result;

	return 0;
}