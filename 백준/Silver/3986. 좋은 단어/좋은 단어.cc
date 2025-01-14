#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, cnt;
string word;
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	while (n--) {
		stack<char> s;
		cin >> word;

		s.push(word[0]);

		for (int i = 1; i < word.size(); i++) {

			// 빈 스택 확인
			if (s.empty()) {
				s.push(word[i]);
				continue;
			}

			// 좋은 문자 확인
			if (s.top() == word[i])
				s.pop();
			else
				s.push(word[i]);
		}

		if (s.empty())
			cnt++;
	}

	// 결과 출력
	cout << cnt;

	return 0;
}