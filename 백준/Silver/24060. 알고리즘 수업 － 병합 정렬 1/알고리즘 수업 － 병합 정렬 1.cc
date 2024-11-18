#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, m, cnt, cut = -1;
int arr[500000], temp[250000];
//=====================================

// 병합 정렬을 위한 정렬 & 병합 함수
void merge(int* arr, int p, int q, int r) {
	int i = p, j = q + 1, t = 0;

	while (i <= q && j <= r) {
		if (arr[i] <= arr[j])
			temp[t++] = arr[i++];
		else
			temp[t++] = arr[j++];
	}
	while (i <= q) {
		temp[t++] = arr[i++];
	}
	while (j <= r) {
		temp[t++] = arr[j++];
	}

	i = p, t = 0;
	while (i <= r) {
		cnt++;
		arr[i++] = temp[t++];
		if (cnt == m) {
			cut = arr[i - 1];
			return;
		}
	}
}

// 병합 정렬을 위한 분할 재귀 함수
void merge_sort(int* arr, int p, int r) {
	if (p < r) {
		int q = floor((p + r) / 2);
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	merge_sort(arr, 0, n - 1);

	// 결과 출력
	cout << cut;

	return 0;
}