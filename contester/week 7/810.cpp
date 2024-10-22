/*
You are given a string. Identify, wheather it is a palindrom or not.
Palindrom is a word that can be read from left to right the same as from right to left.

Input
Input contains single string, without any spaces.

Output
Output YES if given string is palindrom or NO otherwise.
*/

#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(const char* arr){
	int length = strlen(arr);
	const char* l = arr;
	const char* r = arr + length - 1;

	while (l < r) {
		if (*l != *r) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}

int main() {
	char arr[101];
	cin >> arr;
	bool res = palindrome(arr);

	if (res == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}