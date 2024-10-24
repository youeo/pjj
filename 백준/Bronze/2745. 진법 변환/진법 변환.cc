#include <bits/stdc++.h>
#include <cmath>
using namespace std;

//=====================================
int b, x;
string n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;

	cin >> n >> b;

	// 변환
	for (int i = 0; i < n.size(); i++) {
		if (n[i] <= '9')
			x = n[i] - 48;
		else if (n[i] <= 'Z')
			x = n[i] - 55;

		sum += x * pow(b, n.size() - 1 - i);
	}

	// 결과 출력
	cout << sum;
}