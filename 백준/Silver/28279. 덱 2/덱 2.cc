#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, in, num;
deque<int> d;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		switch (in) {
		case 1:
			cin >> num;
			d.push_front(num);
			continue;
		case 2:
			cin >> num;
			d.push_back(num);
			continue;
		case 3:
			if (d.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
			continue;
		case 4:
			if (d.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
			continue;
		case 5:
			cout << d.size() << "\n";
			continue;
		case 6:
			cout << d.empty() << "\n";
			continue;
		case 7:
			if (d.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << d.front() << "\n";
			}
			continue;
		case 8:
			if (d.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << d.back() << "\n";
			}
			continue;
		}
		return 0;
	}
}