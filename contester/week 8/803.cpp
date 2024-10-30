#include <bits/stdc++.h>
using namespace std;

struct Student{
	int id;
	char surname[101];
	double grade;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
	cin >> tt;

	Student* fsb = new Student[tt];

	for (int i=0; i<tt; i++) {
		cin >> fsb[i].id >> fsb[i].surname >> fsb[i].grade;
	}
	int ans = 0;
	for (int i=0; i<tt; i++) {
		if (fsb[i].grade > fsb[ans].grade || fsb[i].grade == fsb[ans].grade && fsb[i].id < fsb[ans].id) {
			ans = i;
		}
	}
	cout << fsb[ans].id << " " << fsb[ans].surname << " " << fsb[ans].grade;
	return 0;
}