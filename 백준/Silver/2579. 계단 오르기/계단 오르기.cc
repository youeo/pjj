#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int s[301];
long long arr[301][3];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 계단 점수 배열 생성
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}

	// 초기값 (두 칸 뒤까지 봐야하기 때문에 2칸 정의 필요)
	arr[1][1] = s[1], arr[1][2] = 0;
	arr[2][1] = s[2], arr[2][2] = s[1] + s[2];


	for (int i = 3; i <= n; i++) {
		// 연속이 아닐 때는 두 칸 전의 값을 비교
		arr[i][1] = max(arr[i - 2][1], arr[i - 2][2]) + s[i];
		// 연속일 때는 이전의 값과 더하기
		arr[i][2] = arr[i - 1][1] + s[i];
	}

	// 결과 출력
	cout << max(arr[n][1], arr[n][2]);

	return 0;
}