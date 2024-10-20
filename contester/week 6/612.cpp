/*
Write a function that converts the binary number to the decimal number.
For example "10" in binary will be "2" in decimal.

Input:
First line contains N(1<=N<=31). That N symbols are inputed(all are 0 or 1)

Output:
The number in decimal format

Input: 
4
1001
Output:
9 
*/

#include <iostream>
#include <cmath>
using namespace std;

int binar(int a, const char bi[]) {
	int sum = 0;
	for (int i=0; i<a; i++) {
		if (bi[i] == '1') {
			sum += pow(2, i);
		}
	}
	return sum;
}

int main() {
	int a;
	char binarka[31];
	cin >> a;
	cin >> binarka;
	int res = binar(a, binarka);
	cout << res;
	return 0;
}