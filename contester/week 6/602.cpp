/*
Write a function double power (double a, int n) that finds the result of the an expression.

Input:
One line that contains a and n (a - real,n - integer).

Output:
Result of the expression.Result will not exceed maximum value of 8 byte double.
Samples:*/

#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n) {
    return pow(a, n);
}
int main() {
    double a;
    int n;
    cin >> a >> n;
    
    double kasa = power(a, n);
    cout << kasa;
    return 0;
}