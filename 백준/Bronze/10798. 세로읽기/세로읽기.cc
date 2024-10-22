#include <bits/stdc++.h>
using namespace std;

//=====================================
string arr[5];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int max = 0;

	for (int i = 0; i < 5; i++) {
		getline(cin, arr[i]);

		if (max < arr[i].size()) {
			max = arr[i].size();
		}
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j].size() > i) {
				cout << arr[j][i];
			}
		}
	}
}