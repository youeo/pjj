#include <bits/stdc++.h>
using namespace std;

//=====================================
int arr[101];
int n, x;
string a;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		x = 0;
		cin >> a;
		if (a.size() == 1) { sum++; }
		else
		{
			for (int j = 0; j < a.size() - 1; j++)
			{
				if (a[j] != a[j + 1]) {
					for (int k = j + 2; k < a.size(); k++)
					{
						if (a[j] == a[k]) { x = 1; break; }
					}
				}
				if (x == 1) { break; }
			}
			if (x == 0) { sum++; }
		}
	}
	cout << sum;
}