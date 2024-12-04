#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
bool fl = 0;
string arr[1000];
int vis[1000][1000];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//=====================================

int bfs(int row, int col) {

	// 너비 우선 탐색 - queue 사용
	queue<pair<int, int>> q;
	vis[row][col] = 1;
	q.push({ row, col });

	while (!q.empty()) {
		auto& [x, y] = q.front(); q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (vis[nx][ny] || arr[nx][ny] == '1') continue;
			vis[nx][ny] = 1;
			q.push({ nx, ny });

			if (nx == m - 1) return 1;

		}
	}

	return 0;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> m >> n;
	cin.ignore();

	// 섬유 격자 생성
	for (int i = 0; i < m; i++) {
		getline(cin, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (vis[0][i] || arr[0][i] == '1') continue;
		if (bfs(0, i)) {
			// 결과 출력 - 침투 성공
			cout << "YES";
			return 0;
		}
	}

	// 결과 출력 - 침투 실패
	cout << "NO";

	return 0;
}