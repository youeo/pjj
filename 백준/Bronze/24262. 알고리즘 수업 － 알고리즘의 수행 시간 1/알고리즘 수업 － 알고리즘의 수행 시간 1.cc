#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define X first
#define Y second
//=====================================
int arr[10], n, i, cnt, k;
//=====================================

int MenOfPassion(int A[], int n) {
	i = floor(n / 2);
	cnt++;
	return A[i];
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cnt = 0;
	k = 0;

	cin >> n;

	MenOfPassion(arr, n);

	while (cnt != n && cnt != 1) {
		if (cnt % n == 0) {
			cnt /= n;
			k++;
		}
		else if (cnt % n != 0 || k > 3) {
			k = 4;
			break;
		}
	}
	cout << cnt << "\n";
	cout << k;
}