#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, cnt = 0;
bool ck1[40], ck2[40], ck3[40];
//=====================================

// 퀸을 놓는 경우의 수 구하기 재귀 함수
void board(int now) {
	if (now == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (ck1[i] || ck2[i + now] || ck3[now - i + n - 1]) {
			continue;
		}
		// 같은 열 또는 대각선 상에 있는지 확인

		ck1[i] = true;
		ck2[i + now] = true;
		ck3[now - i + n - 1] = true;
		board(now + 1);
		ck1[i] = false;
		ck2[i + now] = false;
		ck3[now - i + n - 1] = false;
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	board(0);
	cout << cnt;

	return 0;
}