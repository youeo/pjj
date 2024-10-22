#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[200][200];
int r_arr[100][100];
int n, m;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];

			i >= n ? r_arr[i - n][j] = arr[i][j] + arr[i - n][j] : 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << r_arr[i][j] << ' ';
		}
		cout << "\n";
	}
}