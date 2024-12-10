#include <bits/stdc++.h>
using namespace std;

//=====================================
int e, sum = 0;
string s;
//=====================================

// 합을 구하는 함수
int sum_a(int start, int end) {
	int n = 0, result = 0;

	for (int i = start; i < end; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			n *= 10;
			n += s[i] - '0';
		}
		else {
			result += n;
			n = 0;
		}
	}
	result += n;

	return result;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int n = 0;

	cin >> s;

	// 음수가 있는지 확인 (out of range 방지)
	if (s.find('-') == string::npos)
		e = s.size();
	else
		e = s.find('-');

	// 양수 합에서 최대로 만든 음수 합 빼주기
	sum = sum_a(0, e) - sum_a(e, s.size());

	// 결과 출력
	cout << sum;

	return 0;
}