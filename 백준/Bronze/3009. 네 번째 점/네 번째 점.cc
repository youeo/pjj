#include <bits/stdc++.h>
using namespace std;

//=====================================
int x, y, a, b, xx[3], yy[3];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	// 배열에 각 위치 입력
	for (int i = 0; i < 3; i++) {
		cin >> xx[i] >> yy[i];
	}

	// 나머지 한 위치 찾기
	for (int i = 0; i < 3; i++) {
		if (count(xx, xx + 3, xx[i]) == 1) {
			a = xx[i];
		}
		if (count(yy, yy + 3, yy[i]) == 1) {
			b = yy[i];
		}
	}

	// 결과 출력
	cout << a << ' ' << b;
}