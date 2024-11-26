#include <bits/stdc++.h>
using namespace std;


bool res(string& S) {
	int length = S.length();

	if (length % 2 != 0) {
		return false;
	}

	for (int i = 0; i < length; i += 2) {
    	if (S[i] != S[i + 1]) {
        	return false; 
    	}
	}

	unordered_map<char, int> freq;

	for (char c: S) {
		freq[c]++;
	}

	for (const auto& [key, value] : freq) {
		if (value != 2) {
			return false;
		}
	}
	return true;
}
int main() {
	string S;
	cin >> S;

	if (res(S) != true) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
}