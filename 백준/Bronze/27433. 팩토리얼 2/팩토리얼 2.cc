#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
//=====================================

//factorial 함수
ll fac(int n) {
	if (n == 0) return 1;
	return n * fac(n - 1);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 결과 출력
	cout << fac(n);

	return 0;
}