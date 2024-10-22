#include <iostream>
using namespace std;

const int MAX_N = 21;

int countAccurance(const char* arr, char ch) {
    
    int count = 0;
    while (*arr != '\0') {
        if (*arr == ch) {
            count++;
        }
        arr++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        char ch;
        char str[MAX_N];
        cin >> ch >> str;
        
        int count = countAccurance(str, ch);
        cout << count << " " << ch << " " << "in" << " " << str << endl;
        
    }
    return 0;
}