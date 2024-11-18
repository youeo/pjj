#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, num, mid;
map<int, int> arr;
vector<pair<int, int>> cnt;
//=====================================

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int check = 0;
	long long sum = 0;
	double s = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;
		if (arr.find(in) == arr.end())
			arr.insert({ in, 1 });
		else
			arr[in]++;

		sum += in;
	}

	for (auto& e : arr) {
		cnt.push_back({ e.first, e.second });
	}

	sort(cnt.begin(), cnt.end());

	int i = 0;
	for (auto& e : cnt) {
		for (int j = 0; j < e.second; j++) {
			i++;
			if (i == (n / 2) + 1) {
				mid = e.first;
				break;
			}
		}
		if (i == (n / 2) + 1) {
			break;
		}
	}

	sort(cnt.begin(), cnt.end(), cmp);

	check = cnt[0].second;
	i = 0;
	for (auto& e : cnt) {
		i++;
		if (e.second == check) num = e.first;
		if (i == 2) break;
	}

	auto max = max_element(cnt.begin(), cnt.end());
	auto min = min_element(cnt.begin(), cnt.end());

	// 결과 출력
	s = double(sum) / n;
	round(s) == -0 ? cout << 0 << "\n" : cout << round(s) << "\n";
	cout << mid << "\n";
	cout << num << "\n";
	cout << max->first - min->first;

	return 0;
}