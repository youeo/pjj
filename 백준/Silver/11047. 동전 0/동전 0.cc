#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k, in, result = 0;
vector<int> money;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> k;

	int k_c = k;


	for (int i = 0; i < n; i++) {
		cin >> in;
		money.push_back(in);
	}

	sort(money.begin(), money.end(), greater<>());

	for (int& e : money) {
		int ex = 0;

		if (k == 0) break;

		ex = k / e;
		k %= e;

		if (k_c % e == 0 && result + 1 >= k_c / e) {
			result = k_c / e;
			k = k_c % e;
		}
		else
			result += ex;
	}

	// 결과 출력
	cout << result;

	return 0;
}