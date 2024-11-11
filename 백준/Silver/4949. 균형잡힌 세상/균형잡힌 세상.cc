#include <bits/stdc++.h>
using namespace std;

//=====================================
string in;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	while (1) {
		bool fl = 1;
		stack<char> s;

		getline(cin, in);

		if (in == ".")
			return 0;

		// VPS 확인
		for (char e : in) {

			if (e == '.')
				break;

			if (e == '(' || e == '[') {
				s.push(e);
			}
			else if (e == ')') {
				if (!s.empty() && s.top() == '(')
					s.pop();
				else {
					fl = 0;
					break;
				}
			}
			else if (e == ']') {
				if (!s.empty() && s.top() == '[')
					s.pop();
				else {
					fl = 0;
					break;
				}
			}
		}

		// 결과 출력
		if (fl == 1 && s.empty())
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
	return 0;
}