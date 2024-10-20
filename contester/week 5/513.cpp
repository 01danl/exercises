/*
 * Write a program which implements a very simple computerized telephone directory.
The two-dimensional array numbers holds pairs of names and numbers.
Array elements are following:

"Tom", "555-3322",
"Mary", "555-8976",
"Jon", "555-1037",
"Rachel", "555-1400",
"Sherry", "555-8873"

To find a number, you enter the name. The number is displayed. Otherwise output "Not found"
Your program have to check only given names.
Hint:Use strcmp().

Sample input:
Tom

Sample output:
555-3322
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char* lst[5][2] = {
		{"Tom", "555-3322"},
		{"Mary", "555-8976"},
		{"Jon", "555-1037"},
		{"Rachel", "555-1400"},
		{"Sherry", "555-8873"}
};
	char arr[100];
	cin >> arr;
	bool isfound = false;
	
	for (int i=0; i<5; i++) {
		if (strcmp(arr, lst[i][0]) == 0) {
			cout << lst[i][1];
			isfound = true;
			break;
		}
	}
	if (isfound == false) {
		cout << "No found";
	}
	return 0;
}

