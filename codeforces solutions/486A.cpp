#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;

	if (tt % 2 == 0) {
		cout << tt / 2;
	} else {
		cout << (tt / 2) - tt;
	}
	return 0;
}