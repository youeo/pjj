#include <bits/stdc++.h>
using namespace std;

//=====================================
int n;
string name, st;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n;
	// 사전의 역순이므로 greater 사용
	map<string, string, greater<string>> com;

	// 출입 기록 배열 생성 (중복이 허용되지 않아서 자동으로 마지막 상태가 갱신됨)
	for (int i = 0; i < n; i++) {
		cin >> name >> st;
		com[name] = st;
	}

	//결과 출력
	for (auto& e : com) {
		if (e.second == "enter")
			cout << e.first << "\n";
	}

	return 0;
}