#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, u, v, cnt = 0;
vector<int> arr[1001];
int vis[1001];
//=====================================

void dfs(int r) {

	// 깊이 우선 탐색 - 재귀 사용
	vis[r] = 1;

	for (auto& nxt : arr[r]) {
		if (vis[nxt]) continue;
		dfs(nxt);
	}

}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 양방향 연결 구현
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	// 연결이 끊겼다면 다음 지점을 찾기 위한 반복
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		cnt++;
		dfs(i);
	}

	// 결과 출력
	cout << cnt;

	return 0;
}