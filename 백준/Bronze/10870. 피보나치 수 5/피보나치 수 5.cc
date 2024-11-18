#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
//=====================================

//fibonacci 함수
ll fibo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 결과 출력
	cout << fibo(n);

	return 0;
}