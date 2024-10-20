#include <bits/stdc++.h>
using namespace std;

//=====================================
int a;
int arr[6] = { 1, 1, 2, 2, 2, 8 };
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	// 피스 개수 맞추기
	for (int i = 0; i < 6; i++)
	{
		cin >> a;
		arr[i] -= a;
	}

	// 결과 출력
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}
}