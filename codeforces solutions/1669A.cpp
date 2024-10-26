#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X = 0;
        int value;
        cin >> value;

        if (value >= 1900) {
            X = 1;
        } else if (value >= 1600 && value <= 1899) {
            X = 2;
        } else if (value >= 1400 && value <= 1599) {
            X = 3;
        } else if (value <= 1399) {
            X = 4;
        }
        printf("Division %d\n", X);
    }
    return 0;
}