#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
string s;
//=====================================

// 칸토어 집합 재귀 함수
void cantor(string& s, int d) {

	if (d == 0) return;

	for (int i = d; i < s.size(); i += d * 2) {
		for (int j = i; j < i + d; j++) {
			s[j] = ' ';
		}
	}
	cantor(s, d / 3);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	while (1) {
		cin >> n;
		if (cin.eof()) break;
		else {
			int k = pow(3, n);
			for (int i = 0; i < k; i++) {
				s += '-';
			}
			cantor(s, k / 3);

			// 결과 출력
			cout << s << "\n";
			s.clear();
		}
	}

	return 0;
}