#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	string k;
	cin >> k;

	int anton_count = 0;
	int danik_count = 0;

	for (int i=0; i<k.size(); i++) {
		if (k[i] == 'A') {
			anton_count++;
		} else {
			danik_count++;
		}
	}
	if (anton_count > danik_count) {
		cout << "Anton";
	}
	if (anton_count == danik_count) {
		cout << "Friendship";
	}
	if (anton_count < danik_count) {
		cout << "Danik";
	}
	return 0;
}