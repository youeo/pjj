#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
#define X first
#define Y second
int v, e, v1, v2;
const int INF = 1e9 + 10;
int d[805];
vector<pair<int, int>> arr[805];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//=====================================

// 다익스트라 구현 함수
void dij(int k) {
	d[k] = 0;
	pq.push({ d[k], k });

	while (!pq.empty()) {
		auto [x_dis, x] = pq.top(); pq.pop();

		for (auto [nxt_dis, nxt] : arr[x]) {

			if (d[nxt] <= x_dis + nxt_dis) continue;

			d[nxt] = x_dis + nxt_dis;
			pq.push({ d[nxt], nxt });
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> v >> e;

	fill(d, d + v + 1, INF);

	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		// 양방향으로 검사해야 하므로 두 정점 다 추가
		arr[u].push_back({ w, v });
		arr[v].push_back({ w, u });
	}

	cin >> v1 >> v2;

	ll  v1_1, v1_v2, v1_n, v2_1, v2_n;

	dij(v1);
	v1_1 = d[1];
	v1_v2 = d[v2];
	v1_n = d[v];
	fill(d, d + v + 1, INF);
	dij(v2);
	v2_1 = d[1];
	v2_n = d[v];

	// 두 정점을 지나는 두 가지 최단 경로 비교
	// 첫번째 정점을 먼저 지나는 경우 VS 두번째 정점을 먼저 지나는 경우
	ll ans1 = v1_1 + v1_v2 + v2_n;
	ll ans2 = v2_1 + v1_v2 + v1_n;
	ll ans = ans1 < ans2 ? ans1 : ans2;


	// 결과 출력
	if (ans >= INF) ans = -1;
	cout << ans;

	return 0;
}