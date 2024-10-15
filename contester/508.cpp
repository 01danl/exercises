/*
 * Sum above the main diagonal

Calculate the total sum of element that are located above the main diagonal in a given NxN square table.

Input
First line N (1<=N<=100).
Then NxN table is given(all number are integers)

Output
The total sum of element that are located under main diagonals


Sample input:
3
1 2 3
1 5 6
1 1 8

Sample output:
11
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100][100];

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	// arr[0][1] arr[0][2], arr[1][2] i < j

	for (int j=0; j<n; j++) {
		for (int i=0; i<j; i++) {
			sum += arr[i][j];
		}
	}
	cout << sum;
	return 0;
}
			
