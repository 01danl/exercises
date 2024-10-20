/*
Write a function that converts given sequence of characters from the lower case to upper case.

Input:
The characters that have to be converted.
Input can contain any printeble characted(numbers,"[","]",")"),your task is to change only letters.
The size of the given sequence is not more that 100.

Output:
The sequence of characters in upper case
*/


#include <iostream>
#include <cstring>
using namespace std;

void res(char* str) {
	int length = strlen(str);
	for (int i=0; i<length; i++) {
		str[i] = toupper(str[i]);
	}
}
int main() {
	char str[100];

	cin >> str;
	res(str);
	cout << str;
	return 0;
}