#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int sum_t = 0, cal_n = 0, result = 0, ss = 0;
double dis[100001];
vector<pair<double, double>>price;
//=====================================

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
		for (int j = i + 1; j < n; j++) {
			price[i].second += dis[j];
		}
	}


	auto idx = min_element(price.begin(), price.end() - 1);
	auto now = *idx;

	result = now.first * now.second;
	ss = now.second;

	while (ss != sum_t) {
		idx = min_element(price.begin(), idx);
		now = *idx;

		result += now.first * (now.second - ss);
		ss += (now.second - ss);
	}


	// 결과 출력
	cout << fixed << result;

	return 0;
}