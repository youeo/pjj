#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, c = 2;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 한 변의 점 갯수 구하기
	for (int i = 0; i < n; i++) {
		c += (c - 1);
	}

	// 결과 출력
	cout << c * c;
}