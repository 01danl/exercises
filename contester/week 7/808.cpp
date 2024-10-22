/*
Write a function that find the sum of positive elements in the array that are located in front of the maximum element.

Note. The program have to use pointer.
Input:
First line contains n (1<=n<=100)
Than n numbers are inputed.

Output:
The sum of elements before maximum.
*/

#include <iostream>
using namespace std;

int maxim(int n) {
	int* arr = new int[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int maximka = arr[0];
	int maxim_ind = 0;
	for (int i=0; i<n; i++) {
		if (arr[i] >= maximka) {
			maximka = arr[i];
			maxim_ind = i;
		}
	}
	int summa = 0;
	for (int i=0; i<maxim_ind; i++) {
	    if (arr[i] > 0) {
		    summa += arr[i];
	    }
	}
	return summa;
}
int main() {
	int n;
	cin >> n;
	int res = maxim(n);
	cout << res;
	return 0;
}