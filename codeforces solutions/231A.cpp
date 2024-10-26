#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 0;

	for (int i=0; i<N; i++) {
		int a,b,c;
		cin >> a >> b >> c;

		if(a+b+c >= 2) {
			count++;
		}
	}
	cout << count;
	return 0;
}