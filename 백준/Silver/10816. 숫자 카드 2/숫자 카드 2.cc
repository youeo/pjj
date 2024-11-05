#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in;
vector<int> have;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;

		have.push_back(in);
	}

	// 정렬
	sort(have.begin(), have.end());

	cin >> m;

	// 값이 몇 개 있는지 검사 및 출력 (없으면 두 값이 같아서 0이 출력됨)
	for (int i = 0; i < m; i++) {
		cin >> in;
		cout << upper_bound(have.begin(), have.end(), in)
			- lower_bound(have.begin(), have.end(), in) << ' ';
	}

	return 0;
}