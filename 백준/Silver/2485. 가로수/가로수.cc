#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
long long x[100001], xx[100001];
//=====================================

long long gcd(long long a, long long b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	long long min1 = 1000000000, temp;
	int count = 0;

	cin >> n;

	cin >> in;
	x[0] = in;
	for (int i = 0; i < n - 1; i++) {
		cin >> in;
		x[i + 1] = in;
		xx[i] = max(x[i + 1], x[i]) - min(x[i + 1], x[i]);
	}


	temp = gcd(xx[0], xx[1]);
	for (int i = 2; i < n; i++) {
		if (min1 >= temp) {
			min1 = temp;
		}
		temp = gcd(temp, xx[i]);
	}

	sort(x, x + n);

	int i = 0;
	for (long long p = x[0]; p < x[n - 1]; p += min1) {
		if (p == x[i]) {
			i++;
			continue;
		}
		else {
			count++;
		}
	}

	cout << count;
	return 0;
}