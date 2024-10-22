/*
Write a function that find the number of even numbers that are in range between the maximum and minimum elements of an given array.

Note. The program have to use pointer.
Input:
First line contains n (1<=n<=100)
Than n numbers are inputed.

Output:
The number of elements between minimum and maximum.
*/
#include <iostream>
using namespace std;

int find_even(int n) {
	int* arr = new int[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int maxim_value = -19999;
	int maxim_ind = -1;

	int minim_value = 100000;
	int minim_ind = -1;

	for (int i=0; i<n; i++) {
		if (arr[i] >= maxim_value) {
			maxim_value = arr[i];
			maxim_ind = i;
		}
		if (arr[i] < minim_value) {
			minim_value = arr[i];
			minim_ind = i;
		}
	}
	int count = 0;
	for (int i=minim_ind+1; i<maxim_ind; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	int res = find_even(n);
	cout << res;
	return 0;
}