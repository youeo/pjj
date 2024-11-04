#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string in;
string have[10000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int count = 0;

	cin >> n >> m;

	// 문자열 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> have[i];
	}

	// 배열 정렬
	sort(have, have + n);

	// 이진탐색으로 포함 갯수 체크
	for (int i = 0; i < m; i++) {
		cin >> in;
		if (binary_search(have, have + n, in))
			count++;
	}

	//결과 출력
	cout << count;
	return 0;
}