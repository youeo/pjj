#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
vector<int> arr;
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		// 이전 값보다 작거나 같으면 해당 수보다 크거나 같은 수를 찾아 대체하기
		if (i != 0 && in <= arr.back()) {
			*(lower_bound(arr.begin(), arr.end(), in)) = in;
			continue;
		}
		arr.push_back(in);
	}

	// 결과 출력
	cout << arr.size();

	return 0;
}