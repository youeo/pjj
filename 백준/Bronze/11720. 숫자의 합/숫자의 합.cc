#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, sum=0;
	string num;
	cin >> x;
	cin >> num;

	// 합 계산
	for (int i = 0;i < x;i++) {
		sum += (num[i] - '0');
	}

	// 결과 출력
	cout << sum;
}