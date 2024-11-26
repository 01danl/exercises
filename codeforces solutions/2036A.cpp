#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;
		vector<int> lst(n);
		for (int i=0; i<n; i++) {
			cin >> lst[i];
		}
		bool found = true;
		for (int i=0; i<n-1; i++) {
			if ((abs(lst[i] - lst[i+1]) != 5) && (abs(lst[i] - lst[i+1]) != 7)) {
				found = false;
				break;
			}
		}
		cout << (found? "YES" : "NO") << endl;
	}
	return 0;
}

