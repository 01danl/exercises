/*
Write a function bool myXor (bool x, bool y) that realizes the function of "exclusive OR" on two boolean variables x and y.
myXor function have to return "true", if exactly one of its arguments x or y, but not both are "true".

Input:
Two numbers are inputed - x and y (x and y are 0 or 1, 0 corresponds to false, 1 to true).

Output:
Output "1" or "0" the result of myXor function.
Samples:
Input: 0 1
output: 1
*/

#include <iostream>
using namespace std;

bool myXor(bool x, bool y) {
    return (x || y) && !(x && y);
}
int main() {
    bool x, y;
    cin >> x >> y;
    bool res = myXor(x, y);
    cout << res;
    return 0;
}