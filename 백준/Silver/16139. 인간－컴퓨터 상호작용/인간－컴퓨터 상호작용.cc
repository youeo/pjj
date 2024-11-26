#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, l, r, t;
char a;
string s;
int alpa[27][2001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	// 배열 생성
	cin >> s >> n;

	// 누적 합 계산
	for (int i = 0; i < s.size(); i++) {
		alpa[s[i] - 96][i + 1] = 1;
	}
	for (int i = 1; i <= 26; i++) {
		for (int j = 1; j <= s.size(); j++) {
			alpa[i][j] += alpa[i][j - 1];
		}
	}

	// 결과 출력
	for (int i = 0; i < n; i++) {
		cin >> a >> l >> r;

		t = a - 96;

		cout << alpa[t][r + 1] - alpa[t][l] << "\n";
	}

	return 0;
}