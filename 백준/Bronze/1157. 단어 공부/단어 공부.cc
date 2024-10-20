#include <bits/stdc++.h>
using namespace std;

//=====================================
string a;
char x;
int arr[30];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	cin >> a;
	int size = sizeof(arr) / sizeof(int);
	int max = -1;
	int sum = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > 90) {
			arr[a[i] - 97]++;
		}
		else {
			arr[a[i] - 65]++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
			x = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max) {
			sum++;
		}
	}

	if (sum > 1) { cout << '?'; }
	else { cout << char(x + 65); }

}