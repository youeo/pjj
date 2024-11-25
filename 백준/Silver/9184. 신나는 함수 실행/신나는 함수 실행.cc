#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int a, b, c;
ll arr[21][21][21];
//=====================================



// w(a, b, c) with 재귀 dp
ll w(int i, int j, int k) {

	if (i <= 0 || j <= 0 || k <= 0)
		return 1;
	if (i > 20 || j > 20 || k > 20)
		return w(20, 20, 20);
	if (arr[i][j][k]) // 20 이상인 수가 들어올 때 배열 범위를 벗어날 수 있으니까 확인한 뒤로 배치
		return arr[i][j][k];


	if (i < j && j < k)
		arr[i][j][k] = w(i, j, k - 1) + w(i, j - 1, k - 1) - w(i, j - 1, k);
	else
		arr[i][j][k] = w(i - 1, j, k) + w(i - 1, j - 1, k) + w(i - 1, j, k - 1) - w(i - 1, j - 1, k - 1);

	return arr[i][j][k];
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);


	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;

		// 결과 출력
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
	}

	return 0;
}