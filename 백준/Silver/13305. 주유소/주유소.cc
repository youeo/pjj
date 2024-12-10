#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
ll result = 0, min_p = 1000000001;
ll dis[100001], price[100001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 1; i < n; i++) {
		cin >> dis[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> price[i];
	}

	// 이전 주유소의 가격이 더 낮으면 현재 주유소가 아닌 이전 주유소에서 주유
	for (int i = 1; i <= n; i++) {
		if (price[i] < min_p)
			min_p = price[i];
		result += min_p * dis[i];
	}

	// 결과 출력
	cout << fixed << result;

	return 0;
}