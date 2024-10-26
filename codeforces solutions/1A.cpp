#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M, a;
    cin >> N >> M >> a;

    long long first = (N + a - 1) / a; 
    long long second = (M + a - 1) / a;

    cout << first * second;
    return 0;
}