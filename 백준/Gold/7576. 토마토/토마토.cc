#include <bits/stdc++.h>
using namespace std;

//=====================================
int m, n, mx = 0;
int arr[1000][1000];
int vis[1000][1000];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;
//=====================================

void bfs() {

	// 너비 우선 탐색 - queue 사용

	while (!q.empty()) {
		auto [x, y] = q.front(); q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (arr[nx][ny] != 0) continue;

			vis[nx][ny] = vis[x][y] + 1;
			arr[nx][ny] = 1;
			q.push({ nx, ny });
		}
	}
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> m >> n;

	// 토마토 상자 채우기 & 익은 토마토 확인
	// 시간 단축을 위해 익은 토마토 한 번에 큐에 삽입
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 1) {
				vis[i][j] = 1;
				q.push({ i, j });
			}
		}
	}

	bfs();

	// 최소 날짜 찾기 (익지 못한 토마토 확인)
	// 토마토가 익으면 다 1로 바꿔줬으므로 0인 토마토가 남아있는지만 확인하면 됨
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				cout << -1;
				return 0;
			}
			mx = max(mx, vis[i][j]);
		}
	}

	// 결과 출력
	cout << mx - 1;

	return 0;
}