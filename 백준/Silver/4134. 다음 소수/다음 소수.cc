#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
long long in, mx;
//=====================================

// 소수 확인 함수
int check(long long a) {
	if (a == 0 || a == 1) { return 0; }
	for (long long i = 2; i * i <= a; i++) {
		if (a % i == 0) { return 0; }
	}
	return 1;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 결과 출력
	for (int i = 0; i < n; i++) {
		cin >> in;
		mx = in;
		while (1) {
			if (check(mx)) { break; }
			mx++;
		}

		cout << mx << "\n";
	}
	return 0;
}