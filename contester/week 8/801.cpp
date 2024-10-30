#include <bits/stdc++.h>
using namespace std;

struct Train {
	int id;
	char location[1001];
	char time[1001];

};

void upp(char* str) {
	for(int i=0; i<strlen(str); i++) {
		*(str + i) = toupper(*(str + i));
	}
}
int main() {
	ios::sync_with_stdio(0);
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

	for (int i=0; i<tt; i++) {
		if (strcmp(location_user, poezd[i].location) == 0) {
			cout << poezd[i].id <<  '_' << poezd[i].location << '_' << poezd[i].time;
			return 0;
		}
 	}
 	cout << "Impossible";
 	return 0;
}