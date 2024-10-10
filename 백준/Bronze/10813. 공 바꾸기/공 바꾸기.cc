#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, a, b, s, c[101] = {0};
	cin >> n >> m;

	// 공 초기값 세팅
	for (int i = 0;i < n;i++) {
		c[i] = i+1;
	}

	// 공 교환
	for (int i = 0;i < m;i++) {
		cin >> a >> b;
		s = c[a-1];
		c[a-1] = c[b-1];
		c[b-1] = s;
	}

	//결과 출력
	for (int i = 0;i < n;i++) {
		cout << c[i] << " ";
	}
}