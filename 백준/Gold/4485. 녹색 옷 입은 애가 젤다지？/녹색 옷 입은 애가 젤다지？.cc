#include <bits/stdc++.h>
using namespace std;

//=====================================
const int INF = 0x3f3f3f3f;
int n, in, idx = 1;
int d[130][130];
int arr[130][130];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//=====================================

// 다익스트라 구현 함수
void dij(int k, int p) {
	priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

	d[k][p] = arr[k][p];
	pq.push({ d[k][p], k , p });

	while (!pq.empty()) {
		auto [cost, x, y] = pq.top(); pq.pop();

		if (d[x][y] != cost) continue;

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 1 || nx > n || ny < 1 || ny > n) continue;

			if (d[nx][ny] <= d[x][y] + arr[nx][ny]) continue;

			d[nx][ny] = d[x][y] + arr[nx][ny];
			pq.push({ d[nx][ny], nx, ny });
		}

	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	while (n != 0) {
		// 배열 생성
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> arr[i][j];
			}
		}

		// 초기화
		for (int i = 1; i <= n; i++) {
			fill(d[i], d[i] + n + 1, INF);
		}

		dij(1, 1);

		// 결과 출력
		cout << "Problem " << idx++ << ": " << d[n][n] << "\n";

		cin >> n;
	}

	return 0;
}