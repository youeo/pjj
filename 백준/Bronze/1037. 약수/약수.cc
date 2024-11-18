#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
ll arr[50];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	// 약수로 N 구하기
	if (n == 1 || n == 0) {
		cout << arr[0] * arr[0];
	}
	else if (n % 2 == 0) {
		cout << arr[(n / 2) - 1] * arr[n / 2];
	}
	else {
		cout << arr[n / 2] * arr[n / 2];
	}

	return 0;
}