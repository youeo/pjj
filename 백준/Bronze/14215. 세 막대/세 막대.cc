#include <bits/stdc++.h>
using namespace std;

//=====================================
int a, b, c, mx;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;

	cin >> a >> b >> c;

	while (1) {
		mx = max({ a, b, c });
		sum = a + b + c;

		// 삼각형이 되면 출력
		if (sum - mx > mx) {
			cout << a + b + c;
			return 0;
		}
		else {
			while (1) {
				sum--;
				mx--;
				if (sum - mx > mx) {
					cout << sum;
					return 0;
				}
			}
		}
	}
}