#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n, cnt;
string in;
//=====================================

// palindrome 판단을 위한 재귀 함수
int recursion(string& s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

// palindrome 판단 함수
int isPalindrome(string& s) {
	return recursion(s, 0, s.size() - 1);
}

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> in;

		// 결과 출력
		cout << isPalindrome(in) << ' ' << cnt << "\n";
		cnt = 0;
	}

	return 0;
}