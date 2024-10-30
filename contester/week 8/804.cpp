#include <bits/stdc++.h>
using namespace std;

struct groupmates { 
	int id;
	double grade;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
	cin >> tt;

	groupmates* grp = new groupmates[tt];
	int arr[1001];

	for (int i=0; i<tt; i++) {
		cin >> grp[i].id >> grp[i].grade;
		arr[i] = grp[i].grade;
	}
}