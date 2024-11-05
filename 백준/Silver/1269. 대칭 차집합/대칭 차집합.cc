#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m, in;
vector<int> A, B;
vector <int> ass;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;

	// 배열 생성
	for (int i = 0; i < n; i++) {
		cin >> in;
		A.push_back(in);
	}
	for (int i = 0; i < m; i++) {
		cin >> in;
		B.push_back(in);
	}

	// 정렬
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	// 대칭 차집합 배열 생성
	set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(ass));
	set_difference(B.begin(), B.end(), A.begin(), A.end(), back_inserter(ass));

	// 결과 출력
	cout << ass.size();

	return 0;
}