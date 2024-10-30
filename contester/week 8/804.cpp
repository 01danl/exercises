#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    double grade;
};

bool compare(const Student x1, const Student x2) {
    if (x1.grade != x2.grade) {
        return x1.grade > x2.grade; 
    }
    return x1.id < x2.id; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    Student* grp = new Student[tt];

    for (int i = 0; i < tt; i++) {
        cin >> grp[i].id >> grp[i].grade;
    }

    sort(grp, grp + tt, compare);

    for (int i = 0; i < tt; i++) {
        cout << grp[i].id << " " << grp[i].grade << "\n";
    }

    delete[] grp;
    return 0;
}