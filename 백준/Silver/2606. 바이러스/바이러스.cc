#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in_f, in_s;
int vis[101];
vector<int> arr[101];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int cnt = 0;

	cin >> n >> m;

	// 너비 우선 탐색 - deque 사용
	deque<int> q;
	vis[1] = 1;
	q.push_back(1);

	// 양방향 간선 구현
	for (int i = 0; i < m; i++) {
		cin >> in_f >> in_s;
		arr[in_f].push_back(in_s);
		arr[in_s].push_back(in_f);
	}

	while (!q.empty()) {
		int cur = q.front(); q.pop_front();
		cnt++;

		for (int& e : arr[cur]) {
			if (vis[e]) continue;
			vis[e] = 1;
			q.push_back(e);
		}
	}

	// 결과 출력 (1번 컴퓨터 제외 나머지 감염 컴퓨터의 수)
	cout << cnt - 1 << "\n";

	return 0;
}