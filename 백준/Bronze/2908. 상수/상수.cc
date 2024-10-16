#include <bits/stdc++.h>
using namespace std;


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	string a, b;

	cin >> a >> b;

	// 두 수 반전
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	// 결과 출력
	if (a >= b)
		cout << a;
	else
		cout << b;
}