#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int line = 1;

	cin >> n;

	// x번째일때의 line
	while (n - line > 0) {
		n -= line;
		line++;
	}

	// line이 홀수일 때와 짝수일 때
	if (line % 2) { cout << line + 1 - n << '/' << n; }
	else { cout << n << '/' << line + 1 - n; }
}