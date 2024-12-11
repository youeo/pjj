#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
ll n, k;
ll a[5][5], tmp[5][5], result[5][5];
//=====================================

// 행렬 곱 합수
void multi(ll x[5][5], ll y[5][5]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tmp[i][j] = 0;
			for (int k = 0; k < n; k++) {
				tmp[i][j] += (x[i][k] * y[k][j]);
			}

			tmp[i][j] %= 1000;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = tmp[i][j];
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> k;

	// 행렬 생성
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}

		//단위 행렬 구현
		result[i][i] = 1;
	}

	while (k > 0) {
		// 홀수면 짝수로 만들어주기 위해 행렬을 한 번 곱해줌 (k-1)
		if (k % 2)
			multi(result, a);
		multi(a, a);
		k /= 2;
	}

	// 결과 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << ' ';
		}
		cout << "\n";
	}

	return 0;
}