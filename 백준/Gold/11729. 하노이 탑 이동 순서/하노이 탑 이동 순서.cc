#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
//=====================================

// 하노이탑 재귀 함수
void hanoi(int a, int b, int n) {
	if (n == 1) {
		cout << a << ' ' << b << "\n";
		return;
	}
	hanoi(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << "\n";
	hanoi(6 - a - b, b, n - 1);

}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 하노이탑의 최소 이동 횟수 (-1은 초항 제거)
	cout << int(pow(2, n) - 1) << "\n";
	hanoi(1, 3, n);

	return 0;
}