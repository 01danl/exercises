/*
Position of "-1".

In the given NxM matrix find the LAST position of the minus one(-1).
If it will be no "-1" value in the given matrix just output "-1 -1".

Input
First line N and M (1<=N,M<=100).
Then NxM table is given(all number are integers)

Output
First number have to be the row number,and then column number of last "-1" element.

Sample input:
3 4
1 1 2 3
4 5 0 1
2 3 -1 5

Sample output:
3 3
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
    bool isfound = false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (arr[i][j] == -1) {
                c_ind = i;
                r_ind = j;
                isfound = true;
            }
        }
    }
    if (isfound == false) {
        cout << -1 << " " << -1;
    } else {
        cout << c_ind + 1 << " " << r_ind + 1;
    }
    return 0;
}