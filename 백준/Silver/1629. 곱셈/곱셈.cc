#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
ll a, b, c;
//=====================================

// 분할 곱셈 (재귀 사용)
ll solve(int n) {

	if (n == 1) return a;

	int nn = n / 2;
	// n이 홀수일때와 짝수일때로 구분
	if (n % 2)
		return (solve(nn) % c) * (solve(n - (nn)) % c);
	else
		return (solve(nn) % c) * (solve(nn) % c);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> c;

	// 결과 출력
	cout << solve(b) % c;

	return 0;
}