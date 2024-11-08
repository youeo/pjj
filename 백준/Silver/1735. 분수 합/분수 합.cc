#include <bits/stdc++.h>
using namespace std;

//=====================================
int a, a1, b, b1, lc, temp, gc;
//=====================================

// 최소공약수
int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

// 최대공배수
int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> a1 >> b >> b1;

	lc = lcm(a1, b1);
	temp = (lc / a1 * a) + (lc / b1 * b);
	gc = gcd(temp, lc);

	// 결과 출력
	if (gc == 1) {
		cout << temp << ' ' << lc;
	}
	else {
		cout << temp / gc << ' ' << lc / gc;
	}

	return 0;
}