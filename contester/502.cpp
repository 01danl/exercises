/*

Calculate the total sum of numbers that are located on diagonals in a given square table NxN.

Input
First line N (1<=N<=100).
Then NxN table is given(all number are integers)

Output
Output the sum on the main diagonal and then on the secondary diagonal


Sample input:
3
1 2 3
4 5 6
10 9 8

Sample output:
14 18
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
    // arr[0][0], arr[1][1], arr[2][2];
    // arr[0][2], arr[1][1], arr[2][0];
    
    int sum1 = 0;
    int sum2 = 0;
    
    for (int i=0; i<n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n - 1 - i];
    }
    cout << sum1 << " " << sum2;
    return 0;
}