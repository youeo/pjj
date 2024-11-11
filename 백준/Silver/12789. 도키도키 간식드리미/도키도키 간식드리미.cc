#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in;
stack<int> s;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int num = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		if (num == in) {  // 순서에 맞게 왔을 때
			num++;
			continue;
		}

		while (!s.empty() && num == s.top()) { // 대기열에서 순서가 왔을 때
			num++;
			s.pop();
		}

		if (s.empty() || in < s.top()) { // 순서가 아닐 때 대기열 확인
			s.push(in);
		}
		else {
			cout << "Sad";
			return 0;
		}
	}

	cout << "Nice";
	return 0;
}