/*
Write a function that have to read the numbers from 1 to n and store them into array. As the result your program have to output the numbers.

Note. The program have to use pointer.
Input:
First line contains n (1<=n<=100).
Second line containts n numbers(not bigger that 2147483647).

Output:
Given sequence of numbers.
*/

#include <iostream>
using namespace std;
void read_print(int n) {
	int* arr = new int[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	int n;
	cin >> n;
	read_print(n);
	return 0;
}