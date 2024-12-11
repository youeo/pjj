#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
ll a, b, c;
//=====================================

// 분할 곱셈 (재귀 사용)
ll solve(ll n) {

	if (n == 1) return a % c;

	ll nn = solve(n / 2);

	// n이 홀수일때와 짝수일때로 구분
	// 홀수일 때는 2k+1가 되어야 하는데 이것은 k * k * a로 만들 수 있음 (짝수면 k * k = 2k)
	if (n % 2)
		return (((nn * nn) % c) * a) % c;
	else
		return (nn * nn) % c;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> c;

	// 결과 출력
	cout << solve(b);

	return 0;
}