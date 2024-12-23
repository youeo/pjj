#include <bits/stdc++.h>
using namespace std;

//=====================================
#define X first
#define Y second
int v, e, st;
const int INF = 1e9 + 10;
// <비용, 정점 번호>
vector<pair<int, int>> arr[20005];
int d[20005]; //최단 거리 테이블
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> v >> e >> st;

	// 최단 거리 초기화
	fill(d, d + v + 1, INF);

	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		arr[u].push_back({ w, v });
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	d[st] = 0;
	// 우선순위 큐에 시작점 추가
	pq.push({ d[st], st });

	while (!pq.empty()) {
		auto [x, y] = pq.top(); pq.pop();

		// 이미 조정된 최소거리이면 넘어감
		if (d[y] != x) continue;

		for (auto nxt : arr[y]) {
			// 연결된 점들을 찾아가면서 제일 짧은 거리를 찾기
			if (d[nxt.Y] <= d[y] + nxt.X) continue;

			// 더 짧은 거리라면 수정하고 우선순위 큐에 넣어주기
			d[nxt.Y] = d[y] + nxt.X;
			pq.push({ d[nxt.Y], nxt.Y });
		}

	}

	// 각 점까지의 최단 거리 출력
	for (int i = 1; i <= v; i++) {
		if (d[i] == INF)
			cout << "INF" << "\n";
		else
			cout << d[i] << "\n";
	}

	return 0;
}