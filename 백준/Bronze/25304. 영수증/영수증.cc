#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n, s=0, price[100], count[100];
	cin >> t;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> price[i] >> count[i];
	}
	for (int i = 0; i < n; i++) {
		s += price[i] * count[i];
	}
	if (s == t) { cout << "Yes"; }
	else { cout << "No"; }
}