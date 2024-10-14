#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string n[10];
	int x;
	cin >> x;

	// 문자열 입력받기
	for (int i = 0;i < x;i++) {
		cin >> n[i];
	}

	// 결과 출력
	for (int i = 0;i < x;i++) {
		cout << n[i][0] << n[i][n[i].length() - 1] << "\n";
	}
}