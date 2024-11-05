#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string in;
vector<string> have, per;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int count = 0;

	cin >> n >> m;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;

		have.push_back(in);
	}

	// 정렬
	sort(have.begin(), have.end());


	// 값이 몇 개 있는지 검사 및 출력 (없으면 두 값이 같아서 0이 출력됨)
	for (int i = 0; i < m; i++) {
		cin >> in;
		if (binary_search(have.begin(), have.end(), in)) {
			count++;
			per.push_back(in);
		}
	}

	// 정렬
	sort(per.begin(), per.end());

	cout << count << "\n";
	for (string& e : per) {
		cout << e << "\n";
	}
	return 0;
}