#include <bits/stdc++.h>
using namespace std;

//=====================================
int st, ed;
const int MAX = 100005;
// 방문 여부 확인 배열
bool v[MAX];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//=====================================

// 다익스트라 구현 함수
int dij() {
	v[st] = true;
	pq.push({ 0, st });

	while (!pq.empty()) {
		// 최소 힙이라서 시간이 적게 걸리는 것부터 나옴
		auto [time, x] = pq.top(); pq.pop();

		// 목적지에 다다르면 종료
		if (x == ed) return time;

		// 방문 여부를 확인하면서 우선순위가 높은 순으로 확인
		if (x * 2 < MAX && !v[x * 2]) {
			pq.push({ time, x * 2 });
			v[x * 2] = true;
		}

		if (x + 1 < MAX && !v[x + 1]) {
			pq.push({ time + 1, x + 1 });
			v[x + 1] = true;
		}

		if (x - 1 >= 0 && !v[x - 1]) {
			pq.push({ time + 1, x - 1 });
			v[x - 1] = true;
		}
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> st >> ed;

	// 결과 출력
	cout << dij();

	return 0;
}