#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, count_m = 0, count_z = 0, count_o = 0;
int arr[2187][2187];
//=====================================

// 종이 나누고 확인하는 함수 (재귀 사용)
void solve(int x, int y, int k) {
	int m_o = 0, z = 0, o = 0;
	bool fl = 0;

	// 종이가 되는지 확인 (다른 수가 있으면 멈춤)
	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {

			if (arr[i][j] != arr[x][y]) {
				fl = 1;
				break;
			}

			if (arr[i][j] == -1)
				m_o++;
			else if (arr[i][j] == 0)
				z++;
			else if (arr[i][j] == 1)
				o++;
		}
		if (fl) break;
	}

	// 종료 조건
	if (m_o == k * k) { count_m++; return; }
	else if (z == k * k) { count_z++; return; }
	else if (o == k * k) { count_o++; return; }
	else if (k == 3) {
		for (int i = x; i < x + k; i++) {
			for (int j = y; j < y + k; j++) {

				if (arr[i][j] == -1)
					count_m++;
				else if (arr[i][j] == 0)
					count_z++;
				else if (arr[i][j] == 1)
					count_o++;
			}
		}
		return;
	}

	// 종료 조건에 만족하지 않으면 다시 나눠주기
	// 나누는 칸 만큼 재귀 생성 (여기선 9칸)
	k /= 3;

	solve(x, y, k);
	solve(x, y + k, k);
	solve(x, y + (2 * k), k);
	solve(x + k, y, k);
	solve(x + (2 * k), y, k);
	solve(x + k, y + k, k);
	solve(x + (2 * k), y + k, k);
	solve(x + k, y + (2 * k), k);
	solve(x + (2 * k), y + (2 * k), k);

	return;
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
	cout << count_m << "\n" << count_z << "\n" << count_o;

	return 0;
}