#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, x, y;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int x_min = 10000, y_min = 10000;
	int x_max = -10000, y_max = -10000;

	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		cin >> x >> y;

		// x축의 최소, 최대 구하기
		if (x <= x_min) {
			x_min = x;
		}
		if (y <= y_min) {
			y_min = y;
		}

		// y축의 최소, 최대 구하기
		if (x >= x_max) {
			x_max = x;
		}
		if (y >= y_max) {
			y_max = y;
		}

	}

	// 결과 출력
	if (n == 1) { cout << 0; }
	else { cout << (x_max - x_min) * (y_max - y_min); }
}