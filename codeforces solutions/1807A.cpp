#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int A,B,C;
		cin >> A >> B >> C;

		if (A+B == C) {
			cout << "+" << endl;
		}
		else {
			cout << "-" << endl;
		}
	}
	return 0;

}