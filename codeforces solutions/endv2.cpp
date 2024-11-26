/*
Identify the students with the best academic performance, that is, with the maximum average score in three subjects. Print all students with the highest average score.



Need create: 2d Arrays-20%, Structs-20%, Functions-20% and use: Pointers-20% & String-20%

Input:
First, the number of students is n, then n lines, each of which contains a last name, a first name and three numbers (grades in three subjects: mathematics, physics, computer science). The data in the line is separated by one space. Grade range from 1 to 5.

The total number of students does not exceed 10000.

Output:
Need ouput last name and first name pairs, one per line, separating the last name and first name with space. There is no need to display grades.


Samples:
№	Input	Output
1	2
Markov Valeriy 1 1 1
Sergey Petrov 5 5 5

Sergey Petrov
*/


#include <iostream>
using namespace std;

struct Student {
	string lastname;
	string firstname;
	int grades[3];
};

double findavg(const Student* fsb) {
	return (fsb->grades[0] + fsb->grades[1] + fsb->grades[2]) / 3.0;
}

double maxav(const Student* fsb, int tt) {
	double maxavg = 0.0;
	for (int i=0; i<tt; i++) {
	    double avg = findavg(&fsb[i]);
		if (avg > maxavg) {
			maxavg = avg;
		}
	}
	return maxavg;
}
int main() {
	int tt;
	cin >> tt;
	Student fsb[1000];

	for (int i=0; i<tt; i++) {
		cin >> fsb[i].lastname >> fsb[i].firstname;
		cin >> fsb[i].grades[0] >> fsb[i].grades[1] >> fsb[i].grades[2];
	}

	for (int i=0; i<tt; i++) {
		if (findavg(&fsb[i]) == maxav(fsb, tt)) {
			cout << fsb[i].lastname << " " << fsb[i].firstname << endl;
		}
	}
	return 0;

}