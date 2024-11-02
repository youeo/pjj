#include <iostream>
using namespace std;

//=====================================
int n, in;
int arr[10001];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	//배열 만들기
	for (int i = 0; i < n; i++) {
		cin >> in;
		arr[in]++;
	}

	//결과 출력
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}
	return 0;
}