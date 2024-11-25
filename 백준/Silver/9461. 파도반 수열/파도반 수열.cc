#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n, in;
ll arr[101];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	arr[1] = arr[2] = arr[3] = 1;
	for (int i = 4; i <= 100; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		// 결과 출력
		cout << arr[in] << "\n";
	}

	return 0;
}