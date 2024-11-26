#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, k;
int w[101], v[101], p[101][100001];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> k;

	// 배낭에 넣기 (i = 물건의 개수, j = 배낭의 무게)
    // 물건의 개수와 배낭의 무게가 1인 것부터 저장하며 답 찾기
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];

		for (int j = 1; j <= k; j++) {

			// 배낭에 넣을 수 있다면 : 넣기 전의 가치와 넣었을 때의 가치를 비교해 최대값으로 설정
			if (j - w[i] >= 0)
				p[i][j] = max(p[i - 1][j], p[i - 1][j - w[i]] + v[i]);
			// 배낭에 넣을 수 없다면 : 넣기 전의 가치 유지
			else
				p[i][j] = p[i - 1][j];
		}
	}

	// 결과 출력
	cout << p[n][k];

	return 0;
}