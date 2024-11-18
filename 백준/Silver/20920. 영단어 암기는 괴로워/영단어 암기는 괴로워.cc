#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string in;
unordered_map<string, int> temp;
vector<pair<string, int>> note;
//=====================================

// 우선 순위에 따른 단어 정렬 함수
static bool cmp(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second) {
		if (a.first.size() == b.first.size())
			return a.first < b.first;
		else
			return a.first.size() > b.first.size();
	}
	else {
		return a.second > b.second;
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 중복 체크 및 단어 선별 후 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;
		if (temp.find(in) == temp.end() && in.size() >= m)
			temp.insert({ in, 1 });
		else if (temp.find(in) != temp.end())
			temp[in]++;
	}
	for (auto& e : temp) {
		note.push_back({ e.first, e.second });
	}

	// 정렬
	sort(note.begin(), note.end(), cmp);

	// 결과 출력
	for (auto& e : note) {
		cout << e.first << "\n";
	}

	return 0;
}