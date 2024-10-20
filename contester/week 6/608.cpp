/*
Write a program that uses your function int countAccurance(char arr[maxn], char ch) to culculate how many times give letter meets int the given sequesnce. Use С-style string (without string library).The length of each string is not more that 20 chars.
You have to use developed(written) function N times.

Input:
First line contains N(1<=N<=100).
Then N lines are given in the following format : "one char" a space and that char array.

Output:
N lines in the following format :
< number of occurrence > < letter itself > in < given string >
*/

#include <iostream>
using namespace std;

int MAX_SIZE = 21;

int countAccurance(char arr[21], char ch) {
	int count = 0;
	for (int i=0; arr[i]!='\0'; i++) {
		if (arr[i] == ch) {
			count++;
		}
	}
	return count;
}
int main() {
	int n;
	cin >> n;

	for (int i=0; i<n; i++) {
		char str[MAX_SIZE];
		char ch;
		cin >> ch >> str;
        int res = countAccurance(str, ch);
		cout << res << " " << ch << " " << "in" << " " << str;
	}
	return 0;
}