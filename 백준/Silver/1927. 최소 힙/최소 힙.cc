#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, sz = 0;
int heap[100005];
//=====================================

void push(int x) {
	heap[++sz] = x;
	int idx = sz;

	while (idx != 1) {
		int par = idx / 2;
		if (heap[par] <= heap[idx]) break;
		swap(heap[par], heap[idx]);
		idx = par;
	}
}

int top() {
	return heap[1];
}

void pop() {
	heap[1] = heap[sz--];
	int idx = 1;

	// 왼쪽 자식의 인덱스가 sz보다 크면 idx는 리프임
	while (2 * idx <= sz) {
		int lc = 2 * idx, rc = 2 * idx + 1; // 각각 왼쪽, 오른쪽 자식
		int min_child = lc;

		// 오른쪽 자식이 있는지도 함께 검사
		// 위에 min을 lc로 해놨으니까 rc가 더 작을 때만 바꿔주면 됨.
		if (rc <= sz && heap[rc] < heap[lc])
			min_child = rc;

		// idx와 자식 중 작은 값을 비교해서 idx가 더 작다면 반복문 종료
		if (heap[idx] <= heap[min_child]) break;

		swap(heap[idx], heap[min_child]);
		idx = min_child;
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	// 기본값은 최대 힙
	// priority_queue<int, vector<int>, greater<int>>로 선언시 최소 힙
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;

	while (n--) {
		cin >> in;

		if (in != 0) {
			push(in);
			continue;
		}

		int p = top();
		if (sz == 0)
			cout << 0 << "\n";
		else {
			cout << p << "\n";
			pop();
		}
	}

	return 0;
}