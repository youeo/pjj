#include <bits/stdc++.h>
using namespace std;

//=====================================
vector<int> arr(9);
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int n = 0, m = 0, max = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[j];
		}
		if (max < *max_element(arr.begin(), arr.end())) {
			max = *max_element(arr.begin(), arr.end());
			n = i;
			m = max_element(arr.begin(), arr.end()) - arr.begin();
		}
	}

	cout << max << "\n" << n + 1 << ' ' << m + 1;

}