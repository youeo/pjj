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
		if (heap[par] >= heap[idx]) break;
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

	while (2 * idx <= sz) {
		int lc = 2 * idx, rc = 2 * idx + 1;
		int max_child = lc;

		if (rc <= sz && heap[rc] > heap[lc])
			max_child = rc;

		if (heap[idx] >= heap[max_child]) break;

		swap(heap[idx], heap[max_child]);
		idx = max_child;
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	//priority_queue<int> pq;

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