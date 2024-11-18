#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//=====================================
int n;
string a, b;
unordered_set<string> dance;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	dance.insert("ChongChong");

	cin >> n;

	// 춤 추는 사람 set 생성
	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		if (dance.find(a) != dance.end()) {
			dance.insert(b);
		}
		else if (dance.find(b) != dance.end()) {
			dance.insert(a);
		}
	}

	// 결과 출력
	cout << dance.size();

	return 0;
}