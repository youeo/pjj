#include <bits/stdc++.h>
using namespace std;

//=====================================
int x;
vector<int> v;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int sum = 0;

	cin >> x;

	while (x != -1) {

		// 약수 구하고 더하기
		for (int i = 1; i < x; i++) {
			if (x % i == 0) { v.push_back(i); sum += i; }
		}

		// 조건에 맞게 출력
		if (sum == x) {
			cout << x << " = ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i];
				if (i + 1 != v.size()) { cout << " + "; }
			}
		}
		else {
			cout << x << " is NOT perfect.";
		}
		cout << "\n";


		//초기화
		sum = 0;
		v.clear();
		cin >> x;
	}
}