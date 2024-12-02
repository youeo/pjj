#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, r, in_m, in_r;
int vis[100001];
vector<int> arr[100001];
//=====================================

int cmp(int i, int j) {
	return i > j;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int j = 1;

	cin >> n >> m >> r;

	// 깊이 우선 탐색 - stack 사용
	stack<int> s;
	s.push(r);

	// 양방향 간선 구현
	for (int i = 0; i < m; i++) {
		cin >> in_m >> in_r;
		arr[in_m].push_back(in_r);
		arr[in_r].push_back(in_m);
	}

	//내림차순 탐색을 위한 정렬
	for (int i = 1; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end());
	}


	while (!s.empty()) {
		int cur = s.top(); s.pop();
		if (!vis[cur])
			vis[cur] = j++;

		for (int& e : arr[cur]) {
			if (vis[e] != 0) continue;
			s.push(e);
		}
	}

	// 결과 출력
	for (int i = 1; i <= n; i++) {
		cout << vis[i] << "\n";
	}

	return 0;
}