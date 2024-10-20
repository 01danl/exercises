/*
You given two two-dimention arrays.
Your task is to sum each element of the given matrixes to the third one,and output result matrix.

Input
First line N(1<=N<=100) is given. Then first matrix is given,and then second one is given. Elements' values of the matrix are between 0 and 100.

Output
Output the result matrix.

Sample input:
3
1 2 3
4 5 6
7 8 9

11 12 13
14 15 16
17 18 19

Sample output:
12 14 16
18 20 22
24 26 28
*/

#include <iostream>
using namespace std;

int main() {
    int arr[100][100], arr2[100][100], res[100][100];
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            res[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}