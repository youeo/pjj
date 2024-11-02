#include <bits/stdc++.h>
using namespace std;

//=====================================
int x;
string n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int num = 666, count = 0;

	cin >> x;

	while (count != x) {
		n = to_string(num);
		if (n.find("666") != string::npos) {
			count++;
		}
		num++;
	}

	cout << n;
	return 0;
}