#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
long long f[2'000'001];
long long m = 1'000'000'000;
int diff = 0;
//=====================================


// 피보나치 with dp
int fibonacci() {

	f[999999] = 1;
	f[1000000] = 0;
	f[1000001] = 1;

	for (int i = 1000002; i <= 2000000; i++)
		f[i] = ((f[i - 1] % m) + (f[i - 2] % m)) % m;

	for (int i = 999998; i >= 0; i--)
		f[i] = ((f[i + 2] % m) - (f[i + 1] % m)) % m;

	return 0;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	fibonacci();

	cin >> n;

	// 결과 출력
	if (n < 0 && n % 2 == 0)
		cout << -1 << "\n";
	else if (n == 0)
		cout << 0 << "\n";
	else
		cout << 1 << "\n";


	cout << abs(f[n + 1000000]) % m;
	return 0;
}