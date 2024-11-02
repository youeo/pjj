#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[5];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;


	// 배열 만들고 총합 구하기
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	// 오름차순 정렬
	sort(arr, arr + 5);

	// 결과 출력
	cout << sum / 5 << "\n" << arr[2];
	return 0;
}