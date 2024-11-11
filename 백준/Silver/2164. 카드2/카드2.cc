#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
queue<int> q;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 큐 생성
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	// 카드 버리기
	while (n > 1) {
		q.pop();
		n--;
		q.push(q.front());
		q.pop();
	}

	// 결과 출력
	cout << q.front();
	return 0;
}