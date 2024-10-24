#include <bits/stdc++.h>
#include <cmath>
using namespace std;

//=====================================
int x;
string n;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;

	cin >> n >> x;

	for (int i = 0; i < n.size(); i++) {
		if (n[i] <= '9')
			sum += (n[i] - 48) * pow(x, n.size() - 1 - i);
		else if (n[i] <= 'Z')
			sum += (n[i] - 55) * pow(x, n.size() - 1 - i);
	}

	// 결과 출력
	cout << sum;
}