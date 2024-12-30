#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//=====================================
ll n, m, in;
vector<ll> arr;
//=====================================

// parametric search 활용
int cut(ll t) {
	ll cur = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] - t > 0)
			cur += arr[i] - t;
	}
	return cur >= m;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;
		arr.push_back(in);
	}

	ll st = 0, en = *max_element(arr.begin(), arr.end());

	while (st < en) {
		ll mid = (st + en + 1) / 2;

		if (cut(mid)) st = mid;
		else en = mid - 1;
	}

	// 결과 출력
	cout << st;

	return 0;
}