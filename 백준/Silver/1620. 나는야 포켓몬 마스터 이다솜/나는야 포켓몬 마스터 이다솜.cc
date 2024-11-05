#include <bits/stdc++.h>
using namespace std;

//=====================================
int n, m;
string name, in;
//=====================================


int main() {
	cin.tie(0)->ios::sync_with_stdio(0);

	cin >> n >> m;
	map<int, string> idx;
	map<string, int> poke;

	for (int i = 1; i <= n; i++) {
		cin >> name;
		idx.insert({ i, name });
		poke.insert({ name, i });
	}

	for (int i = 0; i < m; i++) {
		cin >> in;
		if (isdigit(in[0])) {
			cout << idx[stoi(in)] << "\n";
		}
		else {
			cout << poke[in] << "\n";
		}
	}

	return 0;
}