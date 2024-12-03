#include <bits/stdc++.h>
using namespace std;

//=====================================
# define X first
# define Y second
int t, l, row_s, col_s, row_f, col_f;
int vis[300][300];
//=====================================

int bfs() {

	// 너비 우선 탐색 - queue 사용
	queue<pair<int, int>> q;
	vis[row_s][col_s] = 1;
	q.push({ row_s, col_s });

	while (vis[row_f][col_f] == 0) {
		pair<int, int> cur = q.front(); q.pop();

		// 나이트의 이동 구현 - x축 상에서 1씩 이동했을 때 (y축에선 2씩 이동해야 함)
		for (int nxt_x : {cur.X - 1, cur.X + 1}) {
			for (int nxt_y : {cur.Y - 2, cur.Y + 2}) {
				if (nxt_x < 0 || nxt_x >= l || nxt_y < 0 || nxt_y >= l) continue;
				if (vis[nxt_x][nxt_y] > 0) continue;

				vis[nxt_x][nxt_y] = vis[cur.X][cur.Y] + 1;
				q.push({ nxt_x, nxt_y });
			}
		}

		// 나이트의 이동 구현 - x축 상에서 2씩 이동했을 때 (y축에선 1씩 이동해야 함)
		for (int nxt_x : {cur.X - 2, cur.X + 2}) {
			for (int nxt_y : {cur.Y - 1, cur.Y + 1}) {
				if (nxt_x < 0 || nxt_x >= l || nxt_y < 0 || nxt_y >= l) continue;
				if (vis[nxt_x][nxt_y] > 0) continue;

				vis[nxt_x][nxt_y] = vis[cur.X][cur.Y] + 1;
				q.push({ nxt_x, nxt_y });
			}
		}

	}

	return 0;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> t;

	while (t--) {
		cin >> l;
		cin >> row_s >> col_s >> row_f >> col_f;

		bfs();

		// 결과 출력
		cout << vis[row_f][col_f] - 1 << "\n";

		for (int i = 0; i < l; i++) {
			fill(vis[i], vis[i] + l, 0);
		}
	}

	return 0;
}