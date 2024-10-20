/*
You given two one-dimention arrays with N numbers inside.
You task is to find out the array in which total number of positive elements is bigger.

Input:
First line contains N (1<=N<=100).
Then two lines that containts exactly N numbers each are inputed.


Output:
Output have to contain exactly following sentences:
Number of positives in the first array is greater
Number of positives in the second array is greater
Numbers are equal
*/

#include <iostream>
using namespace std;

const char* res(int arr[], int arr2[], int n) {
		int count1 = 0;
		int count2 = 0;

		for (int i=0; i<n; i++) {
		if (arr[i] > 0) {
			count1++;
		}
	}
		for (int i=0; i<n; i++) {
		if (arr2[i] > 0) {
			count2++;
		}
	}
	if (count1 > count2) {
		return "Number of positives in the first array is greater";
	}
	else if(count1 < count2) {
		return "Number of positives in the second array is greater";
	}
	else if(count1 == count2) {
		return "Numbers are equal";
	}
}

int main() {
	int arr[100];
	int arr2[100];
	int n;
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<n; i++) {
		cin >> arr2[i];
	}
    
    const char* result = res(arr, arr2, n);
    cout << result;
    return 0;

}