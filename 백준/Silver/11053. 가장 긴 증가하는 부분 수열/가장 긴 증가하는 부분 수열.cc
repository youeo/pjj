#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, t;
int arr[1000], ck[1000];
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 수열 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 초기값
	ck[0] = 1;

	// 가장 긴 증가하는 부분 수열 구하기
	for (int i = 1; i < n; i++) {
		t = 0;
		for (int j = 0; j <= i; j++) {
			if (arr[i] > arr[j])
				t = max(t, ck[j]);
		}
		if (t == 0) ck[i] = 1;
		else ck[i] = t + 1;
	}

	// 결과 출력
	cout << *max_element(ck, ck + n);

	return 0;
}