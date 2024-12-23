#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
int heap[100005];
//=====================================

class cmp {
public:
	// 우선순위 큐의 비교 함수는 이렇게 작성되어야 함
	// 값이 true면 swap을 하겠다는 의미임
	bool operator() (int a, int b) {
		if (abs(a) != abs(b)) return abs(a) > abs(b); // 절댓값이 가장 작은 값이 위로
		return a > 0 && b < 0; // 절댓값이 같다면 음수인 값이 위로
	}
};

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	priority_queue<int, vector<int>, cmp> pq;

	cin >> n;

	while (n--) {
		cin >> in;

		if (in != 0) {
			pq.push(in);
			continue;
		}

		if (pq.empty())
			cout << 0 << "\n";
		else {
			int p = pq.top();
			cout << p << "\n";
			pq.pop();
		}
	}

	return 0;
}