#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = i-1; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j <= n-i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}