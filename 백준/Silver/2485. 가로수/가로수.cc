#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
long long x[100001], xx[100001];
//=====================================

//최대공약수
long long gcd(long long a, long long b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	long long min = 1000000000, temp;
	int count = 0;

	cin >> n;

	// 입력값과 거리 배열 생성
	cin >> in;
	x[0] = in;
	for (int i = 0; i < n - 1; i++) {
		cin >> in;
		x[i + 1] = in;
		xx[i] = x[i + 1] - x[i];
	}

	// 균형 최소 거리 계산
	temp = gcd(xx[0], xx[1]);
	for (int i = 2; i < n; i++) {
		if (min >= temp) {
			min = temp;
		}
		temp = gcd(temp, xx[i]);
	}

	// 추가될 가로등 계산
	for (int i = 0; i < n - 1; i++) {
		count += (x[i + 1] - x[i]) / min - 1;
	}

	// 결과 출력
	cout << count;
	return 0;
}