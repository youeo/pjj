#include <bits/stdc++.h>
using namespace std;

//=====================================
long long int a, b;
//=====================================

// 최소공약수
long long int gcd(long long int a, long long int b) {
	return b ? gcd(b, a % b) : a;
}

// 최대공배수
long long int lcm(long long int a, long long int b) {
	return a / gcd(a, b) * b;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b;

	// 결과 출력
	cout << lcm(a, b);

	return 0;
}