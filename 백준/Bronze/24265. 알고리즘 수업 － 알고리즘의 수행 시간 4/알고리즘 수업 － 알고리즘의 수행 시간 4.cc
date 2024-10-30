#include <bits/stdc++.h>
using namespace std;

//=====================================
long long n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;


	n % 2 != 0 ? cout << (n / 2) * n << "\n" : cout << (n / 2) * (n - 1) << "\n";
	cout << 2;
}