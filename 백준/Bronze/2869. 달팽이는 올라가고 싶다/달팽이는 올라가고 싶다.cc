#include <bits/stdc++.h>
using namespace std;

//=====================================
long long a, b, v, day;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> v;

	int x = v - a;
	int y = a - b;


	if (a == v) { day = 1; }
	else if (x < y) { day = 2; }
	else if (v % y != 0) { day = x / y + 1; }
	else { day = x / y + 1; }

	if (a + (y * (day - 1)) < v) { day++; }

	cout << day;
}