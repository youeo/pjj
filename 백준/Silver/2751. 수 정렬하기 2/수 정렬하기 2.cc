#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
vector<int> arr;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	// 배열 만들기
	for (int i = 0; i < n; i++) {
		cin >> in;
		arr.push_back(in);
	}

	// 오름차순 정렬
	sort(arr.begin(), arr.end());

	// 결과 출력
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << "\n";
	}
	cout << arr[n - 1];
	return 0;
}