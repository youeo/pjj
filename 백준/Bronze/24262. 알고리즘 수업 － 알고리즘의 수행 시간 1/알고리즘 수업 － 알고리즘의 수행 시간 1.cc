#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

//=====================================
int arr[10], n, i, cnt;
//=====================================

int MenOfPassion(int A[], int n) {
	i = floor(n / 2);
	cnt++;
	return A[i];
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cnt = 0;
	cin >> n;

	MenOfPassion(arr, n);

	cout << cnt << "\n";
	cout << 0;
}