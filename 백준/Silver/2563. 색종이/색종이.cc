#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[100][100];
int n, x, y;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	int sum = n * 100;

	// 색종이 추가
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (arr[j][k] >= 1) {
					arr[j][k] += 1;
					sum--;
				}
				else {
					arr[j][k] = 1;
				}
			}
		}
	}

	// 결과 출력
	cout << sum;
}