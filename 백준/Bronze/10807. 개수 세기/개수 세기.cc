#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t, a[100], c=0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	cin >> t;
	for (int i = 0;i < n;i++) {
		if (a[i] == t) { c++; }
	}
	cout << c;

}