#include <bits/stdc++.h>
using namespace std;

//=====================================
int a, b, c;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> c;

	//삼각형 구분
	if (a == 60 && b == 60 && c == 60) {
		cout << "Equilateral";
	}
	else if (a + b + c == 180 && (a == b || b == c || a == c)) {
		cout << "Isosceles";
	}
	else if (a + b + c == 180 && (a != b || b != c || a != c)) {
		cout << "Scalene";
	}
	else {
		cout << "Error";
	}
}