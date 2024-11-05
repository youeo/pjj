#include <bits/stdc++.h>
using namespace std;

//=====================================
string x;
set<string> arr;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> x;
	int count = 0;

	for (int i = 0; i < x.size(); i++) {
		int cut = x.size();
		while (cut) {
			string im;
			for (int j = i; j < cut; j++) {
				im += x[j];
			}
			arr.insert(im);
			cut--;
		}
	}

	cout << arr.size() - 1;

	return 0;
}