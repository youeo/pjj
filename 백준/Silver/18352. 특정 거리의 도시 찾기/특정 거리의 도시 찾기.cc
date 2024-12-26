#include <bits/stdc++.h>
using namespace std;

//=====================================
const int INF = 1e9 + 10;
int n, m, k, x, v1, v2;
bool f = true;
int d[300005];
vector<int> arr[300005];
//=====================================

// 다익스트라 구현 함수
void dij(int k) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	d[k] = 0;
	pq.push({ d[k], k });

	while (!pq.empty()) {
		auto [cost, x] = pq.top(); pq.pop();

		if (d[x] != cost) continue;

		for (auto nxt : arr[x]) {
			if (d[nxt] <= d[x] + 1) continue;

			d[nxt] = d[x] + 1;
			pq.push({ d[nxt], nxt });
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m >> k >> x;

	while (m--) {
		cin >> v1 >> v2;
		arr[v1].push_back(v2);
	}

	fill(d, d + n + 1, INF);

	dij(x);

	for (int i = 1; i <= n; i++) {
		if (d[i] == k) {
			cout << i << "\n";
			f = false;
		}
	}

	if (f == true)
		cout << -1;

	return 0;
}