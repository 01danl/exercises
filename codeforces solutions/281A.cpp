#include <bits/stdc++.h>
using namespace std;

void res(string& tt) {
	if (tt[0] != toupper(tt[0])) {
		tt[0] = toupper(tt[0]);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string text;
	cin >> text;
	res(text);
	cout << text;
	return 0;
}