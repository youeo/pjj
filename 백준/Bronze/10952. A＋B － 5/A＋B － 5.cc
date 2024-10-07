#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i=0, a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 and b == 0) { break; }
		cout << a + b << "\n";
	}
}