#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k;
queue<int> q;
int arr[1001];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int index = 0;

	cin >> n >> k;

	// 큐 생성
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	// 요세푸스 순열 배열 생성
	while (q.size() > 0) {
		int j = k - 1;
		while (j--) {
			q.push(q.front());
			q.pop();
		}
		arr[index] = q.front();
		index++;
		q.pop();
	}

	// 결과 출력
	cout << '<';
	for (int i = 0; i < index - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[index - 1] << '>';
	return 0;
}