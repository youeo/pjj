#include <bits/stdc++.h>
using namespace std;

//=====================================
int w, h;
string a;
vector<string> arr;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//=====================================

void bfs(int row, int col) {

	// 너비 우선 탐색 - queue 사용
	queue<pair<int, int>> q;
	q.push({ row, col });

	while (!q.empty()) {
		auto [x, y] = q.front(); q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
			if (arr[nx][ny] != 'T') continue;
			arr[nx][ny] = 'S';
			q.push({ nx, ny });
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> w >> h;

	while (w && h) {

		arr.clear();

		// 지도 생성
		for (int i = 0; i < h; i++) {
			cin >> a;
			arr.push_back(a);
		}

		// 거미의 번식 구현
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j] != 'S') continue;
				bfs(i, j);
			}
		}

		// 결과 출력
		for (int i = 0; i < h; i++) {
			cout << arr[i] << "\n";
		}

		cin >> w >> h;
	}

	return 0;
}