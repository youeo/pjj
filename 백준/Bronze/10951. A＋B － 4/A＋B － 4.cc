#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	while (!(cin >> a >> b).eof()) {
		cout << a + b << "\n";
	}
}