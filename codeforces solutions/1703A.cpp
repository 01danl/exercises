#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		string str;
		cin >> str;

		for (int i=0; i<str.size(); i++) {
			str[i] = tolower(str[i]);
		}
		if (str == "yes") {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}