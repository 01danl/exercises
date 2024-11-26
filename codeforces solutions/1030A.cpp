#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
	cin >> tt;
	int sum = 0;
	for (int i=0; i<tt; i++) {
		int a;
		cin >> a;
		sum += a;
	}
	if (sum == 0) {
		cout << "EASY";
	} else {
		cout << "HARD";
	}
	return 0;
}