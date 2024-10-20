#include <bits/stdc++.h>
using namespace std;

//=====================================
string a;
int x = 0;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cin >> a;
	int size = a.size() / 2;

	for (int i = 0; i < size; i++)
	{
		if (a[i] == a[a.size() - i - 1]) {
			x++;
		}
	}

	if (x == size) { cout << '1'; }
	else { cout << '0'; }
}