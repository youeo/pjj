#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int arr[1000];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << "\n";
	}
	cout << arr[n - 1];

	return 0;
}