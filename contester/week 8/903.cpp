#include <bits/stdc++.h>
using namespace std;

void res(string& tt) {

	int left = 0;
	int right = tt.size() - 1;

	while (left <= right) {
		swap(tt[left], tt[right]);
		left++;
		right--;
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string tt;
	getline(cin, tt);
	res(tt);
	cout << tt;
	return 0;
}