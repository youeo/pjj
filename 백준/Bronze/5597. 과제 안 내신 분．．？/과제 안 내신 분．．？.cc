#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, c[30], m=30;

	// 출석부 초기값 세팅
	for (int i = 0;i < m;i++) {
		c[i] = i+1;
	}

	// 출석 체크
	for (int i = 0;i < 28;i++) {
		cin >> a;
		c[a-1] = 0;
	}

	//미제출자 출력
	for (int i = 0;i < m;i++) {
		if (c[i] != 0) { cout << i + 1 << "\n"; }
	}
}