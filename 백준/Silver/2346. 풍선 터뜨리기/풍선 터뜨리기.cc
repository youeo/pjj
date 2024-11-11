#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, k;
deque<pair<int, int>> d;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int index = 1;

	cin >> n;

	// 인덱스와 숫자를 담은 덱 생성
	for (int i = 1; i <= n; i++) {
		cin >> in;
		d.push_back({ i, in });
	}

	// 제일 앞의 풍선을 먼저 터뜨림
	k = d.front().second;
	cout << d.front().first << ' ';
	d.pop_front();

	// 숫자에 맞게 이동 및 결과 출력
	while (d.size() > 0) {
		if (k > 0) {
			k -= 1;
			while (k--) {
				d.push_back(d.front());
				d.pop_front();
			}
			cout << d.front().first << ' ';
			k = d.front().second;
			d.pop_front();
		}
		else {
			k += 1;
			while (k++) {
				d.push_front(d.back());
				d.pop_back();
			}
			cout << d.back().first << ' ';
			k = d.back().second;
			d.pop_back();
		}
	}
	return 0;
}