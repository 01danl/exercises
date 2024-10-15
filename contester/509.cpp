/*
You task is to find the column number(index) that have maximum sum of it's elements.

Input
First line N and M (1<=N,M<=100).
Then NxM table is given(all number are integers)

Output
The index of the column with maximum sum of it's elements.


Sample input:
3 4
1 2 3 1
1 5 6 1
1 1 8 1

Sample output:
3
*/

#include <iostream>
using namespace std;

int main() { 
	int arr[100][100];
	int n, m;
	cin >> n >> m;

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
	int max = -111;
	int col_pos = 0;
	for (int j=0; j<m; j++) {
		int sum = 0;
		for (int i=0; i<m; i++) {
			sum += arr[i][j];
			if (sum > max) {
				max = sum;
				col_pos = j + 1;
			}
		}
	}
	cout << col_pos;
	return 0;
}