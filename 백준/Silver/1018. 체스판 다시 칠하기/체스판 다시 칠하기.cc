#include <bits/stdc++.h>
using namespace std;

//=====================================
int x, y;
string wb[8], bw[8], p[51];
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int min = 65, count_wb = 0, count_bw = 0, plus = 0;

	cin >> x >> y;

	for (int i = 0; i < x; i++) {
		cin >> p[i];
	}


	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			wb[i] = "WBWBWBWB";
			bw[i] = "BWBWBWBW";
		}
		else {
			wb[i] = "BWBWBWBW";
			bw[i] = "WBWBWBWB";
		}
	}

	for (int i = 0; i <= x - 8; i++) {
		for (int j = 0; j <= y - 8; j++) {
			while (plus < 8) {
				for (int k = 0; k < 8; k++) {
					if (p[i + plus][j + k] != wb[plus][k]) { count_wb++; }
					if (p[i + plus][j + k] != bw[plus][k]) { count_bw++; }
				}
				plus++;
			}
			if (count_wb <= count_bw && count_wb < min) { min = count_wb; }
			else if (count_bw < count_wb && count_bw < min) { min = count_bw; }

			plus = 0;
			count_wb = 0;
			count_bw = 0;
		}
	}

	if (min == 65) { cout << 0; }
	else { cout << min; }
	return 0;
}