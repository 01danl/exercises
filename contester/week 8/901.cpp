#include <bits/stdc++.h>
using namespace std;

int res(string& tt, string& ch) {
    for (int i=0; i<=tt.size() - ch.size(); i++) {
        bool found = true;
        for (int j=0; j<ch.size(); j++) {
            if (tt[i+j] != ch[j]) {
                found = false;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string tt;
    getline(cin, tt);
    string ch;
    getline(cin, ch);
    
    int result = res(tt, ch);
    cout << result;
    return 0;
}