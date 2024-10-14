#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string x;

	// 배열 초기화
	int al[26];
	for (int i = 0;i < 26;i++) {
		al[i] = -1;
	}
	cin >> x;

	// 합 계산
	for (int i = 0;i < x.length();i++) {
		if (al[x[i] - 'a'] == -1) {
			al[x[i] - 'a'] = i;
		}
	}

	// 결과 출력
	for (int i = 0;i < 26;i++) {
		cout << al[i] << " ";
	}
}