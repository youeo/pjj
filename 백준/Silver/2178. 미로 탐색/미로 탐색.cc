#include <bits/stdc++.h>
using namespace std;

//=====================================
# define X first
# define Y second
int t, m, n, r, result;
int vis[100][100];
string arr[100];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//=====================================

int bfs() {

	// 너비 우선 탐색 - queue 사용
	queue<pair<int, int>> q;
	vis[0][0] = 1;
	q.push({ 0, 0 });

	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] > 0 || arr[nx][ny] != '1') continue;
			vis[nx][ny] = vis[cur.X][cur.Y] + 1; //거리 계산을 위해 이전 칸 거리에서 +1
			q.push({ nx, ny });
		}
	}

	return 0;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bfs();

	// 결과 출력
	cout << vis[n - 1][m - 1];

	return 0;
}