#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
int a;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cin >> n;

	for (int i = 0; i < 2 * n - 1; i++)
	{
		if (i == n) { a = n - 3; }
		if (i < n) {
			for (int j = 0; j < n - (i + 1); j++)
			{
				cout << ' ';
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << '*';
			}
		}
		else {
			for (int j = 0; j <= i - n; j++)
			{
				cout << ' ';
			}
			for (int j = 0; j < i + a; j++)
			{
				cout << '*';
			}
			a -= 3;
		}

		cout << "\n";
	}
}