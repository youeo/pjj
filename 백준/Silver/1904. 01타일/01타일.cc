#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
ll arr[1000001];
//=====================================



// 00과 1로 만들 수 있는 2진 수열의 경우의 수는 피보나치 규칙과 동일하게 늘어남을 이용
ll tile(ll n) {

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;


	for (int i = 4; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;

	return arr[n];
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	
	// 결과 출력
	cout << tile(n);

	return 0;
}