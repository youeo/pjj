#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n, nn;
ll in;
int arr[100'000];
//=====================================

int binary_search(ll t) {
	int lo = 0, hi = n-1;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (arr[mid] < t)
			lo = mid + 1;
		else if (arr[mid] > t)
			hi = mid - 1;
		else
			return 1;
	}
	return 0;
}


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cin >> nn;

	while (nn--) {
		cin >> in;

		cout << binary_search(in) << "\n";
	}

	return 0;
}