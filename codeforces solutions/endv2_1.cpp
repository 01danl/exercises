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

double maxavg(const Student* fsb, int tt) {
	double maxan = 0.0;
	for (int i=0; i<tt; i++) {
		if (findavg(&fsb[i]) > maxan) {
			maxan = findavg(&fsb[i]);
		}
	}
	return maxan;
} 

int main() {
	int tt;
	cin >> tt;

	Student* fsb = new Student[tt];

	for (int i=0; i<tt; i++) {
		cin >> fsb[i].lastname >> fsb[i].firstname;
		cin >> fsb[i].grade[0] >> fsb[i].grade[1] >> fsb[i].grade[2];
	}

	for (int i=0; i<tt; i++) {
		if (findavg(fsb[i]) == maxavg(fsb, tt)) {
			cout << fsb[i].lastname << fsb[i].firstname << endl;
		}
	}
	return 0;
}