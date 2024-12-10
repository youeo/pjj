#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, count_w, count_b;
int arr[128][128];
//=====================================

// 색종이 나누고 확인하는 함수 (재귀 사용)
void solve(int x, int y, int k) {
	int w = 0, b = 0;

	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {
			if (arr[i][j] == 0)
				w++;
			else
				b++;
		}
	}

	if (w == k * k) { count_w++; return; }
	else if (b == k * k) { count_b++; return; }
	else {
		k /= 2;

		solve(x, y, k);
		solve(x + k, y, k);
		solve(x, y + k, k);
		solve(x + k, y + k, k);
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);

	// 결과 출력
	cout << count_w << "\n" << count_b;

	return 0;
}