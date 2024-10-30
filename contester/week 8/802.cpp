#include <bits/stdc++.h>
using namespace std;

struct Train {
	int id;
	char location[1001];
	char time[1001];

};

bool check(char* time1, char* time2) {
	return strcmp(time1, time2) < 0;
}
void upp(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
	cin >> tt;

	Train* poezd = new Train[tt];
	for (int i=0; i<tt; i++) {
		cin >> poezd[i].id >> poezd[i].location >> poezd[i].time;
		upp(poezd[i].location);
	}
	char location_user[1001];
	cin >> location_user;
	upp(location_user);

	int ear_ind = -1;
	bool found = false;

	for (int i=0; i<tt; i++) {
		if (strcmp(location_user, poezd[i].location) == 0) {
			if (!found || check(poezd[i].time, poezd[ear_ind].time)) {
				ear_ind = i;
				found = true;
			}

		}
	}
	if (found) {
		 cout << poezd[ear_ind].id << "_" << poezd[ear_ind].location << "_" << poezd[ear_ind].time;
	} else {
		cout << "Impossible";
	}
	return 0;



}