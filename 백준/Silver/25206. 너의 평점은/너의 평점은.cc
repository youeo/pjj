#include <bits/stdc++.h>
using namespace std;

//=====================================
double score, g_score;
string a, grade;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	double g_sum = 0, sum = 0;

	for (int i = 0; i < 20; i++) {
		cin >> a >> score >> grade;

		// 등급 변환
		if (grade[0] == 'P') { continue; }
		else if (grade[0] == 'F') { g_score = 0.0; }
		else if (grade[0] == 'A') { g_score = 4.0; }
		else if (grade[0] == 'B') { g_score = 3.0; }
		else if (grade[0] == 'C') { g_score = 2.0; }
		else if (grade[0] == 'D') { g_score = 1.0; }
		if (grade[1] == '+') { g_score += 0.5; }

		// 학점과 과목평점 계산
		g_sum += score;
		sum += (score * g_score);
	}

	// 결과 출력
	cout.precision(6);
	cout << fixed;
	cout << sum / g_sum;
}