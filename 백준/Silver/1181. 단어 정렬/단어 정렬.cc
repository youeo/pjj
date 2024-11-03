#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
//=====================================

// 비교 조건함수 (문자의 길이가 같으면 사전순으로 정렬)
bool cmp(string& a, string& b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	vector<string> arr(n);

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 정렬
	sort(arr.begin(), arr.end(), cmp);

	// 중복 제거
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	// 결과 출력
	for (string e : arr) {
		cout << e << "\n";
	}

	return 0;
}