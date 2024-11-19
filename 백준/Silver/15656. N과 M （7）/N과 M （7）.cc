#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in;
int arr[10];
vector<int> num;
//=====================================

// N과M 수열 재귀 함수(7)
void nandm(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		arr[k] = num[i];
		nandm(k + 1);
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> in;
		num.push_back(in);
	}
	sort(num.begin(), num.end());

	nandm(0);

	return 0;
}