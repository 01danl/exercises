/*
Symmetric matrix

You given square matrix. Your task is to check if the given matrix is symmetric according to it's main diagonal.

Input
First line N (1<=N<=100).
Then NxN table is given(all number are from -32768 to 32767)

Output
Output "YES" if matrix is symmetric according to main diagonal or "NO" otherwise.

Sample input:
3
1 2 3
2 4 5
3 5 6

Sample output:
YES
*/

#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j] != arr[j][i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}