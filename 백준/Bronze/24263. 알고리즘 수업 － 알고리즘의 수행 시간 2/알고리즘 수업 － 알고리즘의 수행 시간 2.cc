#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[500000], n, i, cnt, sum;
//=====================================

int MenOfPassion(int A[], int n) {
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += A[i];
		cnt++;
	}

	return sum;
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cnt = 0;
	cin >> n;

	MenOfPassion(arr, n);

	cout << cnt << "\n";
	cout << 1;
}