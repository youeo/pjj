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
		if (grade == "P") { continue; }
		else if (grade == "F") { g_score = 0.0; }
		else if (grade == "A+") { g_score = 4.5; }
		else if (grade == "A0") { g_score = 4.0; }
		else if (grade == "B+") { g_score = 3.5; }
		else if (grade == "B0") { g_score = 3.0; }
		else if (grade == "C+") { g_score = 2.5; }
		else if (grade == "C0") { g_score = 2.0; }
		else if (grade == "D+") { g_score = 1.5; }
		else if (grade == "D0") { g_score = 1.0; }

		// 학점과 과목평점 계산
		g_sum += score;
		sum += (score * g_score);
	}

	// 결과 출력
	cout.precision(6);
	cout << fixed;
	cout << sum / g_sum;
}