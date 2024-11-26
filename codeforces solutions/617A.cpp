#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	int count = 0;
	while (a > 0) {
		if (a >= 5) {
			a -= 5;
		} else if (a >= 4) {
			a -= 4;
		} else {
			a -= 3;
		}
	}
	cout << count;
	return 0;
}