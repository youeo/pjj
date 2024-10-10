#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, a, b, s, c[101] = {0};
	cin >> n >> m;

	// 공 초기값 세팅
	for (int i = 0;i < n;i++) {
		c[i] = i + 1;
	}

	// 역순 정렬
	for (int i = 0;i < m;i++) {
		cin >> a >> b;
		int d = (b - a) / 2;
		for (int j = 0;j <= d;j++) {
			swap(c[a - 1 + j], c[b - 1 - j]);
		}
	}

	//결과 출력
	for (int i = 0;i < n;i++) {
		cout << c[i] << " ";
	}
}