#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, cnt_1, cnt_2;
int f[50];
//=====================================

// 피보나치 with 재귀
int fib(int k) {
	if (k == 1 || k == 2) return 1;
	else {
		cnt_1++;
		return fib(k - 1) + fib(k - 2);
	}
}

// 피보나치 with dp
int fibonacci(int k) {
	f[1] = f[2] = 1;
	for (int i = 3; i <= k; i++) {
		cnt_2++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[k];
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cnt_1 = 0, cnt_2 = 0;

	cin >> n;

	fib(n);
	fibonacci(n);

	// 결과 출력
	cout << cnt_1 + 1 << ' ' << cnt_2;

	return 0;
}