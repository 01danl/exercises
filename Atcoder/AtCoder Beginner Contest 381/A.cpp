#include <bits/stdc++.h>
using namespace std;

bool res(string& S, int T)
{
	if (T % 2 == 0) {
		return false;
	}

	if (S[T / 2] != '/') {
		return false;
	}

	for (int i=0; i<T / 2; i++) {
		if (S[i] != '1') {
			return false;
		}
	}

	for (int i=T/2 + 1; i<T; i++) {
		if (S[i] != '2') {
			return false;
		}
	}
	return true;
}

int main() {
	int T;
	cin >> T;
	string S;
	cin >> S;

	if (res(S, T) == true) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}
