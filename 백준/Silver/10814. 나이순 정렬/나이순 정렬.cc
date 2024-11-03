#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, f;
string s;
vector<tuple<int, int, string>> arr;
//=====================================

// 비교 조건함수 (나이가 같으면 일찍 가입한 사람이 먼저)
static bool cmp(const tuple<int, int, string>& a, const tuple<int, int, string>& b) {
	if (get<1>(a) == get<1>(b))
		return get<0>(a) < get<0>(b);
	return get<1>(a) < get<1>(b);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		arr.push_back({ i, f, s });
	}

	// 정렬
	sort(arr.begin(), arr.end(), cmp);

	// 결과 출력
	for (auto& e : arr) {
		cout << get<1>(e) << ' ' << get<2>(e) << "\n";
	}

	return 0;
}