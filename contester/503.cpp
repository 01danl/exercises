/*
Zero position.

In the given matrix find the position of the zero.

Input
First line N and M (1<=N,M<=100).
Then NxM table is given(all number are integers)

Output
First number have to be the row number,and then column number of zero's element.

Sample input:
3 4
1 1 2 3
4 5 0 1
2 3 4 5

Sample output:
2 3
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
    
    int c_ind = 0;
    int r_ind = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (arr[i][j] == 0) {
                c_ind = i;
                r_ind = j;
            }
        }
    }
    cout << c_ind + 1 << " " << r_ind + 1;
    return 0;
}