#include <bits/stdc++.h>
using namespace std;

//=====================================
int a, b;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> a >> b;

	while (a != b) {
		if (b % a == 0)
			cout << "factor" << "\n";
		else if (a % b == 0)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";
		cin >> a >> b;
	}
}