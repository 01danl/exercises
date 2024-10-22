#include <iostream>
#include <cctype>
using namespace std;

void result(const char* arr, char* res) {

    while (*arr != '\0') {
        if (isalpha(*arr)) {
            *res = *arr;
            res++;
        }
        arr++;
    }
    *res = '\0';
}

int main() {
    char arr[101];
    char res[101];
    cin >> arr;
    result(arr, res);
    cout << res;
    return 0;
}