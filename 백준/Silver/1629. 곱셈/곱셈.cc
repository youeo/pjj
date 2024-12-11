#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
ll a, b, c;
//=====================================

// 분할 곱셈 (재귀 사용)
ll solve(ll n) {

	if (n == 1) return a;

	ll nn = solve(n / 2);
	// n이 홀수일때와 짝수일때로 구분
	if (n % 2)
		return (nn * solve(n - (n / 2))) % c;
	else
		return (nn * nn) % c;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> c;

	// 결과 출력
	cout << solve(b) % c;

	return 0;
}