#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//=====================================
int n;
string in;
set <string> chat;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int result = 0;

	cin >> n;

	// 이모티콘 사용자 계산
	for (int i = 0; i < n; i++) {
		cin >> in;
		if (in == "ENTER") {
			result += chat.size();
			chat.clear();
		}
		else if (chat.find(in) == chat.end()) {
			chat.insert(in);
		}
	}
	result += chat.size();

	// 결과 출력
	cout << result;

	return 0;
}