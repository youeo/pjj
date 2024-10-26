#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int c = 1, i = 2, j = 0;

	cin >> n;

	// 방 갯수 카운트
	while (i <= n) {
		c++;
		i += j + 6;
		j += 6;
	}
	cout << c;
}