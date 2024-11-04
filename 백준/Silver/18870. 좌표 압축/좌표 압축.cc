#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, s;
vector<int> ori, cpy;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 좌표 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> s;
		ori.push_back(s);
		cpy.push_back(s);
	}

	// 오름차순 정렬 후 중복 제거
	stable_sort(ori.begin(), ori.end());
	ori.erase(unique(ori.begin(), ori.end()), ori.end());

	// 좌표의 인덱스 추출 및 결과 출력 (nlgn)
	for (int& e : cpy) {
		cout << lower_bound(ori.begin(), ori.end(), e) - ori.begin() << ' ';
	}

	return 0;
}