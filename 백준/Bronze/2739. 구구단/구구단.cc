#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	int n = 1;
	cin >> x;
	while (n != 10) {
		cout << x << " * " << n << " = " << x * n << '\n';
		n++;
	}
}