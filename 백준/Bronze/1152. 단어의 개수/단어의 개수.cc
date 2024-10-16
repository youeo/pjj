#include <bits/stdc++.h>
using namespace std;


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int n;
	string a;
	getline(cin, a);

	// 공백 찾기
	if (a.size() == 1 && a == " ")
		n = 0;
	else if (a.size() == 1 && a != " ")
		n = 1;
	else
		n = count(a.begin() + 1, a.end() - 1, ' ') + 1;

	//결과 출력
	cout << n;
}