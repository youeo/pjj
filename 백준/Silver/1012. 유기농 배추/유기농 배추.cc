#include <bits/stdc++.h>
using namespace std;

//=====================================
# define X first
# define Y second
int t, m, n, r;
int vis[50][50];
int arr[50][50];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//=====================================

int bfs(int x, int y) {

	// 너비 우선 탐색 - deque 사용
	deque<pair<int, int>> q;
	vis[x][y] = 1;
	q.push_back({ x, y });

	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop_front();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] || arr[nx][ny] != 1) continue;
			vis[nx][ny] = 1;
			q.push_back({ nx, ny });
		}
	}

	return 0;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> t;

	for (int k = 0; k < t; k++) {
		int row, col, cnt = 0;

		cin >> m >> n >> r;

		// 밭에 배추 심기
		for (int j = 0; j < r; j++) {
			cin >> row >> col;
			arr[col][row] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1 && vis[i][j] == 0) {
					cnt++;
					bfs(i, j);
				}
			}
		}

		// 결과 출력
		cout << cnt << "\n";

		// 다음 케이스를 위한 초기화
		for (int i = 0; i < n; i++) {
			fill(arr[i], arr[i] + m, 0);
			fill(vis[i], vis[i] + m, 0);
		}

	}

	return 0;
}