/*
Write a function int min (int a, int b, int c, int d) that find the minimum out of four given numbers.

Input:
Four numbers.

Output:
The minimum out of 4 numbers.
*/

#include <iostream>
using namespace std;
int min(int a, int b, int c, int d) {
    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    return min;
}
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    int n = min(a,b,c,d);
    cout << n;
    return 0;
}