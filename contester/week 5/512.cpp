/*
 * Rotate the matrix.

Your task is to rotate given matrix on 90 degree counterclockwise.

Input
First line N and M (1<=N,M<=100).
Then NxM table is given(all number are integers)

Output
Rotated matrix.

Sample input:
3 4
1 1 2 3
4 5 0 1
2 3 4 5

Sample output:
3 1 5
2 0 4
1 5 3
1 4 2
*/
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[100][100];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
    cout << endl;
	for (int j=m-1; j>=0; j--) {
		for (int i=0; i<n; i++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

