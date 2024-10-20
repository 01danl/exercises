/*
Write a function bool election(bool x, bool y,bool z) that returns the value (true or false), which is most common among the values of its arguments x, y, z.
Input:
Tree numbers are inputed - x,y and z (x,y,z are 0 or 1, 0 corresponds to false, 1 to true).

Output:
Output "1" or "0" the result of election function.
*/

#include <iostream>
using namespace std;

bool election(bool x, bool y, bool z) {
	if ((x + y + z) > 2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	bool x, y, z;
	cin >> x >> y >> z;
	bool election_res = election(x,y,z);
	cout << election_res;
	return 0;
}
