#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[100], n, m, r;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	int p = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				r = arr[i] + arr[j] + arr[k];
				if (r <= m && (m - r) < (m - p)) { p = r; }
			}
		}
	}

	cout << p;
}