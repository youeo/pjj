#include <bits/stdc++.h>
using namespace std;

//=====================================
string N;
int n, r_N;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int mn = 1000001;
	int sum = 0;

	cin >> N;
	r_N = stoi(N);
	n = stoi(N);

	while (n >= 1) {
		N = to_string(n);
		for (int j = 0; j < N.size(); j++) {
			sum += N[j] - '0';
		}

		if (r_N == n + sum && n < mn) {
			mn = n;
		}
		n--;
		sum = 0;
	}

	if (mn == 1000001) { cout << 0; }
	else { cout << mn; }
}