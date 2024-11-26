#include <bits/stdc++.h>
using namespace std;

void remax(int& a, int b) {
    if (b > a) {
        a = b;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    int tt;
    cin >> tt;

    while (tt--) {
        int n, w, h;
        cin >> n;
        int maxW = 0;
        int maxH = 0;
        while (n--) {
            cin >> w >> h;
            remax(maxW, w);
            remax(maxH, h);
        }
        cout << (maxW + maxH) * 2 << endl;
    }
    return 0;
}