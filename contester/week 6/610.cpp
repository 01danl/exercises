/*
Write a function that converts given sequence by the following rules:
1 - If the letter is in upper case make it lower case;
2 - If the letter is in lower case make it upper case;
3 - If it's not a letter left it as is

Input:
The characters that have to be converted.
Input can contain any printeble characted(numbers,"[","]",")"),your task is to change only letters.
The size of the given sequence is not more that 100.

Output:
The proper sequence of characters(see the sample).
*/

#include <iostream>
#include <cstring>
using namespace std;

void res(char* str) {
	int length = strlen(str);
    
    for (int i=0; i<length; i++) {
    	if (str[i] == tolower(str[i])) {
    		str[i] = toupper(str[i]);
    	}
    	else if(str[i] == toupper(str[i])) {
    		str[i] = tolower(str[i]);
    	}
    }
}

int main() {
	char str[100];
	cin >> str;
	res(str);
	cout << str;
	return 0;
}