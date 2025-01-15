#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, cnt;
string iron;
stack<int> s;
//=====================================

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> iron;

	for (int i = 0; i < iron.size(); i++) {

		// 레이저로 파이프 자르기
		if (iron[i] == '(' && iron[i + 1] == ')') {
			cnt += s.size();
			i++;
		}
		// 파이프 생성
		else if (iron[i] == '(') {
			s.push(i);
		}
		// 파이프 삭제
		else {
			cnt++;
			s.pop();
		}
	}

	// 결과 출력
	cout << cnt;

	return 0;
}