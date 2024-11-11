#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
int s[100000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int p = 0, j = 1, sum = 0;

	cin >> n;

	// 스택 생성
	for (int i = 0; i < n; i++) {
		cin >> in;

		if (in != 0) {
			s[j++] = in;
			p++;
		}
		else {
			s[j--] = 0;
			p--;
		}
	}

	// 합 구하기
	for (int i = 1; i <= p; i++) {
		sum += s[i];
	}

	// 결과 출력
	cout << sum;
	return 0;
}