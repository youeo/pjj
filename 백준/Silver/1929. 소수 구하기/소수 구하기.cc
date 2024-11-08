#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
vector<bool> prime(1000002, true);
//=====================================

// 소수 확인 함수 (에라토스테네스의 체)
static int eratos(vector<bool>& arr) {
	int s = 1000000;

	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i * i <= s; i++) {
		if (!prime[i]) { continue; }
		for (int j = i * i; j <= s; j += i) {
			prime[j] = 0;
		}
	}
	return 0;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	eratos(prime);

	// 결과 출력
	for (int i = n; i <= m; i++) {
		if (prime[i]) { cout << i << "\n"; }
	}
	return 0;
}