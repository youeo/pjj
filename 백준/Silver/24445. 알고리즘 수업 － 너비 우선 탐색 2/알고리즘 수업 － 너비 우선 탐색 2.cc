#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, r, in_m, in_r;
int vis[100001], ck[100001];
vector<int> arr[100001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int j = 1;

	cin >> n >> m >> r;

	// 너비 우선 탐색 - deque 사용
	deque<int> q;
	vis[r] = 1;
	ck[r] = j;
	q.push_back(r);

	// 양방향 간선 구현
	for (int i = 0; i < m; i++) {
		cin >> in_m >> in_r;
		arr[in_m].push_back(in_r);
		arr[in_r].push_back(in_m);
	}

	//내림차순 탐색을 위한 정렬
	for (int i = 1; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end(), greater<>());
	}


	while (!q.empty()) {
		int cur = q.front(); q.pop_front();
		ck[cur] = j++;

		for (int& e : arr[cur]) {
			if (vis[e]) continue;
			vis[e] = 1;
			q.push_back(e);
		}
	}

	// 결과 출력
	for (int i = 1; i <= n; i++) {
		cout << ck[i] << "\n";
	}

	return 0;
}