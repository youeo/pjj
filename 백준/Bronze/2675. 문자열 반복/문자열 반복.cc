#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
	int n, x;
	string a;
	cin >> n;
    
    //문자 반복 출력
	for (int i = 0;i < n;i++) {
		cin >> x >> a;
		for (int j = 0;j < a.size();j++) {
			for (int k = 0;k < x;k++) {
				cout << a[j];
			}
		}
		cout << '\n';
	}
}