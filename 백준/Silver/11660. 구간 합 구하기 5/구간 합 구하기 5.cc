#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, x_1, y_1, x_2, y_2, t, result;
int arr[1025][1025];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 배열 생성
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	// 누적 합 계산
	for (int i = 1; i <= n; i++) {
		arr[i][1] += arr[i - 1][n];
		for (int j = 2; j <= n; j++) {
			arr[i][j] += arr[i][j - 1];
		}
	}

	// 결과 출력
	for (int i = 0; i < m; i++) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;

		if (y_1 != 1) {
			result = arr[x_1][y_2] - arr[x_1][y_1 - 1];
		}
		else {
			result = arr[x_1][y_2] - arr[x_1 - 1][n];
		}
		t = x_1 + 1;
		while (1) {
			if (t > x_2) break;
			if (y_1 != 1)
				result += arr[t][y_2] - arr[t][y_1 - 1];
			else
				result += arr[t][y_2] - arr[t - 1][n];
			t++;
		}

		cout << result << "\n";
	}

	return 0;
}