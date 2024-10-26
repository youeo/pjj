#include <bits/stdc++.h>
using namespace std;

//=====================================
int a, b, c;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b >> c;

	while (a != 0) {

		// 삼각형 구분 및 출력
		if (a + b + c - max({ a, b, c }) > max({ a, b, c })) {
			if (a == b && b == c) {
				cout << "Equilateral" << "\n";
			}
			else if (a == b || b == c || a == c) {
				cout << "Isosceles" << "\n";
			}
			else if (a != b && b != c && a != c) {
				cout << "Scalene" << "\n";
			}
		}
		else {
			cout << "Invalid" << "\n";
		}
		cin >> a >> b >> c;
	}
}