#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
ll sum;
ll arr[101][10];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 초기값 (한 자리수에서 각 숫자로 만들 수 있는 경우의 수)
	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1;
	}
	// 0으로만은 만들 수 없음
	arr[1][0] = 0;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				arr[i][j] = arr[i - 1][j + 1];  // 시작과 끝은 하나씩만 확인 (이미 중간에서 두 개씩 확인함)
			else if (j == 9)
				arr[i][j] = arr[i - 1][j - 1];
			else
				// 이전 자리수 숫자와 앞 뒤 숫자를 더해서 만들 수 있으니까 양쪽으로 확인
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];

			arr[i][j] %= 1000000000;
		}
	}

	// 최종값 더해주기
	for (int i = 0; i < 10; i++) {
		sum += arr[n][i];
	}

	// 결과 출력
	cout << sum % 1000000000;

	return 0;
}