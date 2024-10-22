#include <iostream>
using namespace std;

int twosum(int n) {
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first_zero = -1;
    int second_zero = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (first_zero == -1) {
                first_zero = i;
            } else {
                second_zero = i;
                break;
            }
        }
    }

    if (first_zero == -1 || second_zero == -1) {
        delete[] arr;
        return 0;
    }

    int summa = 0;
    for (int i = first_zero + 1; i < second_zero; i++) {
        summa += arr[i];
    }

    delete[] arr;
    return summa;
}

int main() {
    int n;
    cin >> n;
    int res = twosum(n);
    cout << res;
    return 0;
}