#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, r, in_f, in_s;
int vis_d[1001], vis_b[1001];
vector<int> arr[1001];
//=====================================

int dfs() {

	// 깊이 우선 탐색 - stack 사용
	stack<int> s;
	s.push(r);

	while (!s.empty()) {
		int cur = s.top(); s.pop();
		if (vis_d[cur] == 0) {
			vis_d[cur] = 1;
			cout << cur << ' ';

		}

		for (int& e : arr[cur]) {
			if (vis_d[e]) { continue; }
			s.push(e);
		}
	}

	return 0;
}

int bfs() {

	// 너비 우선 탐색 - deque 사용
	deque<int> q;
	vis_b[r] = 1;
	q.push_back(r);

	while (!q.empty()) {
		int cur = q.front(); q.pop_front();
		cout << cur << ' ';

		for (int& e : arr[cur]) {
			if (vis_b[e]) continue;
			vis_b[e] = 1;
			q.push_back(e);
		}
	}

	return 0;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m >> r;

	// 양방향 간선 구현
	for (int i = 0; i < m; i++) {
		cin >> in_f >> in_s;
		arr[in_f].push_back(in_s);
		arr[in_s].push_back(in_f);
	}

	for (int i = 1; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end(), greater<>());
	}

	dfs();

	cout << "\n";

	for (int i = 1; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end(), less<>());
	}

	bfs();

	return 0;
}