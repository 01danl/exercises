#include <bits/stdc++.h>
using namespace std;

void result(string& text, string& ch) {
	for (int i=0; i<text.size(); i++) {
	    for (int j=0; j<ch.size(); j++) {
	        if (text[i] == ch[j]) {
	            text[i] = '*';
	        }
	    }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string tt;
    getline(cin, tt);
	string ch;
	getline(cin, ch);

	result(tt, ch);
	cout << tt;
	return 0;

}