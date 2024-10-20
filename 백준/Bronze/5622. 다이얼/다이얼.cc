#include <bits/stdc++.h>
using namespace std;


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;
	string a;

	cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		sum += 2;
		if (a[i] >= 65) {
			sum++;
			if (a[i] >= 68) {
				sum++;
				if (a[i] >= 71) {
					sum++;
					if (a[i] >= 74) {
						sum++;
						if (a[i] >= 77) {
							sum++;
							if (a[i] >= 80) {
								sum++;
								if (a[i] >= 84) {
									sum++;
									if (a[i] >= 87) {
										sum++;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << sum;
}