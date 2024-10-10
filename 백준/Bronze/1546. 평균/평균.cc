#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	double t = 0, c[1000];
	cin >> n;

	// 점수 받기
	for (int i = 0;i < n;i++) {
		cin >> c[i];
	}

	// 최대값 찾기
	int max = *max_element(c, c + n);

	// 새로운 평균 계산
	for (int i = 0;i < n;i++) {
		t += c[i] / max * 100;
	}

	//결과 출력
	cout << fixed;
	cout.precision(2);
	cout << t / n;
}