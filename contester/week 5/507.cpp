/*
 *
 * Sum under main diagonal

Calculate the total sum of element that are located under main diagonal in a given NxN square table.

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
3
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

	// arr[1][0], arr[2][0], arr[2][1]
	// j < i;
	int sum = 0;

	for (int i=0; i<n; i++) {
		for (int j=0; j<i; j++) {
			sum += arr[i][j];
		}
	}
	cout << sum;
	return 0;
}

