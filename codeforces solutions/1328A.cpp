#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int tt;
	cin >> tt;

	while (tt--) {
		int a,b;
		cin >> a >> b;

		if (a % b == 0) {
			cout << 0 << endl;
		} else {
			int rem = a % b;
			cout << b - rem << endl;
		}
	}
	return 0;
}