#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, f, s;
vector<pair<int, int>> arr;
//=====================================

// 비교 조건함수 (x값이 같으면 y값을 기준으로 정렬)
bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		arr.push_back({ f, s });
	}

	// 비교
	sort(arr.begin(), arr.end(), cmp);

	//결과 출력
	for (auto& e : arr) {
		cout << e.first << ' ' << e.second << "\n";
	}

	return 0;
}