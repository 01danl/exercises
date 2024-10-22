/*
Write a function that converts an array so that in the first half settled with elements from odd positions, 
and in the second half - with elements from the even positions.
Positions are counted from the first index.

Note. The program have to use pointer.
Input:
First line contains n (1<=n<=100)
Than n numbers are inputed.

Output:
Result sequence.

input: 
8
1 2 3 4 5 6 7 8
output:
1 3 5 7 2 4 6 8

*/

#include <iostream>
using namespace std;

void res(int* arr, int size) {
	int* ans = new int[size];
	int initial = 0;
	int mid = size / 2;

	for (int i=0; i<size; i++) {
		if (arr[i] % 2 == 0) {
			ans[mid] = arr[i];
			mid++;
		}
		else {
			ans[initial] = arr[i];
			initial++;
		}
	}

	for (int i=0; i<size; i++) {
		arr[i] = ans[i];
	}
	delete[] ans;
}

int main() {
	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i=0; i<size; i++) {
		cin >> arr[i];
	}
	res(arr, size);

	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}