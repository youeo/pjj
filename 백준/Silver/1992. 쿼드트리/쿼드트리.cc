#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
string arr[64];
//=====================================

// 쿼드트리 구현 함수 (재귀 사용)
void solve(int x, int y, int k) {
	int z = 0, o = 0;

	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {

			if (arr[i][j] == '0')
				z++;
			else
				o++;
		}
	}

	// 0이나 1중 하나로만 꽉 차있으면 해당 숫자 출력
	// 아니고 2*2 크기이면 있는 숫자들 차례대로 출력
	if (z == k * k) { cout << 0; return; }
	else if (o == k * k) { cout << 1; return; }
	else if (k == 2) {
		cout << "(";
		for (int i = x; i < x + k; i++) {
			for (int j = y; j < y + k; j++) {
				cout << arr[i][j];
			}
		}
		cout << ")";
		return;
	}

	// 위 조건들에 만족하지 못하면 나누기 수행
	k /= 2;

	cout << "(";

	solve(x, y, k);
	solve(x, y + k, k);
	solve(x + k, y, k);
	solve(x + k, y + k, k);

	cout << ")";

	return;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	solve(0, 0, n);

	return 0;
}