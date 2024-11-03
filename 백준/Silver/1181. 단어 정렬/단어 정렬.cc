#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
string in;
map<string, int> arr;
vector<pair<string, int>> vec;
//=====================================

// 비교 조건함수 (문자의 길이가 같으면 사전순으로 정렬)
bool cmp(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 중복 없이 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;
		arr[in] = in.length();
	}

	// 정렬을 위해 이동
	for (auto& e : arr) {
		vec.push_back({ e.first, e.second });
	}

	// 정렬
	sort(vec.begin(), vec.end(), cmp);

	// 결과 출력
	for (auto& e : vec) {
		cout << e.first << "\n";
	}

	return 0;
}