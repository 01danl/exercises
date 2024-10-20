/*
Write a program that uses your function int countAccurance(char arr[maxn], char ch) to culculate how many times give letter meets int the given sequesnce. Use С-style string (without string library).The length of each string is not more that 20 chars.

Input:
Any time you will be give two chars and two char arrays.

Output:
Have to hold only two lines in the following format:
< number of occurrence > < letter itself > characters in < given string >
*/

#include <iostream>
using namespace std;
int MAX_SIZE = 21;
int countO(const char arr[], char ch) {
	int count = 0;

	for (int i=0; arr[i]!='\0'; i++) {
		if (arr[i] == ch) {
			count++;
		}
	}
	return count;
}

int main() {
	char ch1, ch2;
	char first[MAX_SIZE];
	char second[MAX_SIZE];

	cin >> ch1 >> ch2;
	cin >> first;
	cin >> second;

	int count1 = countO(first, ch1);
	int count2 = countO(second, ch2);

	cout << count1 << count2;
	return 0;