#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int i = 2;

	cin >> n;

	while (n != 1 && n / i != 1) {
		if (n % i == 0) {
			cout << i << "\n";
			n /= i;
		}
		else {
			i++;
		}
	}
	if (n != 1) cout << n;
}