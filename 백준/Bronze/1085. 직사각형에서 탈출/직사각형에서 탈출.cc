#include <bits/stdc++.h>
using namespace std;

//=====================================
int x, y, w, h;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int x_min, y_min;

	cin >> x >> y >> w >> h;

	if (x - 0 >= w - x) {
		x_min = w - x;
	}
	else {
		x_min = x - 0;
	}

	if (y - 0 >= h - y) {
		y_min = h - y;
	}
	else {
		y_min = y - 0;
	}

	x_min <= y_min ? cout << x_min : cout << y_min;
}