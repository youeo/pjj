#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
ll sum_t = 0, cal_n = 0, result = 0, ss = 0;
ll dis[100001];
vector<pair<ll, ll>>price;
//=====================================

int cmp(pair <ll, ll>& a, pair <ll, ll>& b) {
	if (a.first == b.first)
		return a.second > b.second;
	return a.first < b.first;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	price.resize(n);

	for (int i = 1; i < n; i++) {
		cin >> dis[i];
		sum_t += dis[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> price[i].first;
	}

	int cc = sum_t;
	for (int i = 0; i < n; i++) {
		price[i].second = cc;
		cc -= dis[i + 1];
	}


	auto idx = min_element(price.begin(), price.end() - 1, cmp);
	auto now = *idx;

	result = now.first * now.second;
	ss = now.second;

	while (ss != sum_t) {
		idx = min_element(price.begin(), idx, cmp);
		now = *idx;

		result += now.first * (now.second - ss);
		ss += (now.second - ss);
	}


	// 결과 출력
	cout << fixed << result;

	return 0;
}