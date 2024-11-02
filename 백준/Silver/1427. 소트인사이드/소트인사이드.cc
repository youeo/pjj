#include <iostream>
using namespace std;

//=====================================
int in;
int arr[10];
string n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	//배열 만들기
	for (int i = 0; i < n.size(); i++) {
		in = n[i] - '0';
		arr[in]++;
	}

	//결과 출력
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i;
		}
	}
	return 0;
}