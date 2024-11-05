#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string name, in;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	map<string, string> idx;
	map<string, string> poke;

	for (int i = 1; i <= n; i++) {
		cin >> name;
		idx[to_string(i)] = name;
		poke[name] = to_string(i);
	}

	for (int i = 0; i < m; i++) {
		cin >> in;
		if (atoi(in.c_str()) != 0) {
			cout << idx[in] << "\n";
		}
		else {
			cout << poke[in] << "\n";
		}
	}

	return 0;
}