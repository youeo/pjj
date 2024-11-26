#include <bits/stdc++.h>
using namespace std;

//=====================================
string a, b;
int arr[1001][1001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b;

	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {

			// 두 문자가 같으면 continue, 다르면 이전까지 비교했던 것 중 최대값을 저장
			if (a[i - 1] == b[j - 1])
				arr[i][j] = arr[i - 1][j - 1] + 1;
			else
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
		}
	}

	// 결과 출력
	cout << arr[a.size()][b.size()];

	return 0;
}