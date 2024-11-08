#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, mx;
//=====================================

// 소수 확인 함수
int check(int a) {
	if (a == 0 || a == 1) { return 0; }
	if (a != 2 && a % 2 == 0) { return 0; }
	for (long long i = 3; i * i <= a; i += 2) {
		if (a % i == 0) { return 0; }
	}
	return 1;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 결과 출력
	for (int i = n; i <= m; i++) {
		mx = i;
		if (check(mx)) { cout << mx << "\n"; }
	}
	return 0;
}