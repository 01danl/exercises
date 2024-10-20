/*
One of the most basic arithmetic operation is comparison.
In this problem you need to write a function char getSign(int,int) that will compare two given integers and return only "<" , ">" or "=".

Input:
Two integer numbers.

Output:
One character that can be only "<" , ">" , "=".
*/

#include <iostream>
using namespace std;

char sign(int a, int b) {
	if (a > b) {
		return '>';
	}
	else if(a < b) {
		return '<';
	}
	else if(a == b) {
		return '=';
	}
	return 0;
}

int main() {
	int a, b;
	cin >> a >> b;
	char res = sign(a,b);
	cout << res;
	return 0;
}
