#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
string in;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		bool fl = 1;
		stack<char> s;

		getline(cin, in);

		// VPS 확인
		for (char e : in) {

			if (e == '(')
				s.push(e);
			else
				if (s.empty()) {
					fl = 0;
					break;
				}
				else {
					s.pop();
				}
		}

		// 결과 출력
		if (fl == 1 && s.empty())
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}