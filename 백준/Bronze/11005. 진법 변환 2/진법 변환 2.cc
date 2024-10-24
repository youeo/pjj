#include <bits/stdc++.h>
#include <cmath>
using namespace std;

//=====================================
int n, b, x;
char str[1000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0, i = 0;

	cin >> n >> b;

	// 변환
	while (n != 0) {
		x = n % b;
		n = n / b;
		if (x < 10)
			str[i] = char(x + 48);
		else
			str[i] = char(x + 55);
		i++;
	}

	// 결과 출력
	for (int j = 0; j < i; j++) {
		cout << str[i - 1 - j];
	}
}