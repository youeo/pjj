#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in;
int arr[10];
bool check[10];
vector<int> num;
//=====================================

// N과M 수열 재귀 함수(10)
void nandm(int k, int idx) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}

	int n_check = -1;
	for (int i = idx; i < n; i++) {
		if (!check[i] && n_check != num[i]) {
			arr[k] = num[i];
			check[i] = true;
			n_check = num[i];
			nandm(k + 1, i + 1);
			check[i] = false;
		}
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

	nandm(0, 0);

	return 0;
}