#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, s, c[10] = {0}, t = 0;

	// 입력 & 나머지 구하기
	for (int i = 0;i < 10;i++) {
		cin >> a;
		c[i] = a%42;
	}

	//중복 체크
	s = c[0];
	for (int i = 0;i < 10;i++) {
		for (int j = i+1;j < 10;j++) {
			if (c[i] == c[j]) { c[j] = 43; }
		}
	}

	//결과 분석
	for (int i = 0;i < 10;i++) {
		if (c[i] != 43) { t++; }
	}

	//결과 출력
	cout << t << "\n";
}