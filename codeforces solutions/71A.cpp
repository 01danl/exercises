#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);


	int tt;
	cin >> tt;

	while(tt--) {
		string text;
		cin >> text;
		if (text.length() > 10) {
			cout << text[0] << text.length() - 2 << text[text.length()-1] << endl;
		} else {
			cout << text << endl;
		}
	}
	return 0;
}