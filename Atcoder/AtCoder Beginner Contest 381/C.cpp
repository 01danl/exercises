#include <bits/stdc++.h>
using namespace std;

int res(string& S, int T) {

	count = 0;
	if (T % 2 != 0) {
		count++;
	}

	for (int i=0; i<T/2; i++) {
		if (S[i] != '1') {
			return 0;
		}
	}
	count++;

	if (S[T / 2] != '/') {
		return 0;
	} else {
		count++;
	}

	for (int i=T/2+1; i<T; i++) {
		if (S[i] != '2') {
			return 0;
		}
	}
	count++;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	string S;
	cin >> S;

	cout << res(S,N) << endl;
}