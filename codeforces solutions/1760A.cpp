#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i=0; i<N; i++) {
		int A, B, C;
		cin >> A >> B >> C;

		int max_val = max({A,B,C});
		int min_val = min({A,B,C});

		cout << (A+B+C) - (max_val+min_val) << endl;
	}
return 0;
}	