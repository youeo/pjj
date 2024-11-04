#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in;
set<int> have;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

    // 보유한 카드 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;
		have.insert(in);
	}

	cin >> m;

    // 카드 비교 후 결과 출력
	for (int i = 0; i < m; i++) {
		cin >> in;
		if (have.find(in) != have.end())
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}

	return 0;
}