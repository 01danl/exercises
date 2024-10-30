#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	while (t--) {
		int n;
		cin >> n;

		if (n%2 == 0) {
			cout << "Sakurako\n" << endl;
		}
		else {
			cout << "Kosuke\n" << endl;
		}
	}
	return 0;
}