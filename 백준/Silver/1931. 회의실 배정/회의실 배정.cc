#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, s_t, e_t, result = 1;
vector<pair<int, int>> arr;
//=====================================

int cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	arr.resize(n);

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	// 회의 종료 시간이 빠른 순으로 정렬
	sort(arr.begin(), arr.end(), cmp);

	// 회의실 배정
	int e = arr[0].second;
	for (int i = 1; i < n; i++) {
		if (e <= arr[i].first) {
			e = arr[i].second;
			result++;
		}
	}

	// 결과 출력
	cout << result;

	return 0;
}