#include <bits/stdc++.h>
using namespace std;

//=====================================
int in, n, m, r;
long long result;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> in;

	for (int i = 0; i < in; i++) {
		result = 1;
		int r = 1;

		cin >> n >> m;

		// 조합 계산
		for (int j = m; j > m - n; j--) {
			result *= j;
			result /= r;
			r++;
		}

		// 결과 출력
		cout << result << "\n";
	}

	return 0;
}