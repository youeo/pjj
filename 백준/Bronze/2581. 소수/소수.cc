#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, x;
bool f = 0;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0, ct = 0;

	cin >> n >> m;

	for (int i = n; i <= m; i++) {

		// 소수 확인
		for (int j = 2; j < i; j++) {
			if (i % j == 0) { f = 1; break; }
		}
		if (!f && i != 1) {
			sum += i;
			if (ct == 0) { x = i; ct++; }
		}
		f = 0;
	}

	//결과 출력
	ct == 0 ? cout << "-1" : cout << sum << "\n" << x;
}