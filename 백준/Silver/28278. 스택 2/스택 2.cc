#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, num;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	stack<int> s;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		if (in == 1) {
			cin >> num;
			s.push(num);
		}
		else if (in == 2) {
			if (s.empty()) { cout << -1 << "\n"; }
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (in == 3) {
			cout << s.size() << "\n";
		}
		else if (in == 4) {
			cout << s.empty() << "\n";
		}
		else {
			if (s.empty()) { cout << -1 << "\n"; }
			else {
				cout << s.top() << "\n";
			}
		}
	}
	return 0;
}