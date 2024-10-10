#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[9];
	int length = sizeof(a) / sizeof(int);
	for (int i = 0;i < 9;i++) {
		cin >> a[i];
	}
	cout << *max_element(a, a + length) << "\n" << max_element(a, a + length)-a+1;
}
