/*
Minimum in the table

You given a table that consist of N lines and M rows.
All numbers in the table are natural and not bigger than 1000.
Your task is to find the minimum in the table.

Input:
First line containts N(number of lines) and M(number of rows) (1<=N<=100, 1<=M<=100)
.
That whole table is given.

Output:
Output minimum from the give table.

Sample input:
3 4
6 4 10 4
3 7 5 7
6 3 4 3

Sample output:
3
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
    int minim = 1000;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (arr[i][j] < minim) {
                minim = arr[i][j];
            }
        }
    }
    
    cout << minim;
    return 0;
    
}