#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i=0;
	vector<int> a(10000);
	vector<int> b(10000);
	while (1) {
		cin >> a[i] >> b[i];
		if (a[i] == 0 and b[i] == 0) { break; }
		cout << a[i] + b[i] << "\n";
		i++;
	}
}