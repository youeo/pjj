#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k;
int vis[100001];
int arr[100001];
//=====================================

int bfs() {

	// 너비 우선 탐색 - queue 사용
	queue<int> q;
	vis[n] = 1;
	q.push(n);

	while (!q.empty()) {
		int cur = q.front(); q.pop();

		for (int nxt : {cur - 1, cur + 1, cur * 2}) {
			if (nxt < 0 || nxt > 100000) continue; //범위 안에서만 검사해도 됨
			if (vis[nxt] > 0) continue; // 이미 이전에 방문했다면 그게 최소값이므로 넘어감
			vis[nxt] = vis[cur] + 1;
			q.push(nxt);
		}
	}

	return 0;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> k;

	bfs();

	// 결과 출력
	cout << vis[k] - 1;

	return 0;
}