#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int arr[1000000];
multiset<int> keep;
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 첫 번쨰 풍선부터 시작
	int cur_h = arr[0] - 1;
	int cnt = 1;
	for (int i = 1; i < n; i++) {

		// 날아가다가 풍선을 만났을 때
		if (keep.find(arr[i]) != keep.end()) {
			keep.erase(keep.find(arr[i]));
			keep.insert(arr[i] - 1);
			continue;
		}

		// 풍선을 만나지 못했을 때 
		if (cur_h != arr[i]) {
			keep.insert(cur_h);
			cur_h = arr[i] - 1;
			cnt++;
		}
		// 풍선을 만났을 때
		else {
			cur_h--;
		}
	}

	// 결과 출력
	cout << cnt;

	return 0;
}