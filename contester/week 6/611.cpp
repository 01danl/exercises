/*
Write a function that takes the time as three integer arguments (hours, minutes and seconds)
and returns the number of seconds.
Use this function to calculate the amount of time between two given times, both of which are within one 12-hour cycle of the clock.

Input:
6 integer numbers are inputed.First time will be always smaller that second.

Output:
Output time difference in format:
HOURS : MINUTES : SECONDS
*/

#include <iostream>
using namespace std;
int arg(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}
int main() {
    int hour1, minutes1, seconds1;
    cin >> hour1 >> minutes1 >> seconds1;
    int hour2, minutes2, seconds2;
    cin >> hour2 >> minutes2 >> seconds2;
    int res1 = arg(hour1, minutes1, seconds1);
    int res2 = arg(hour2, minutes2, seconds2);
    
    int diff = res2-res1;
    
    int hour_res = diff / 3600;
    diff = diff % 3600;
    int minutes_res = diff / 60;
    int seconds_res = diff % 60;
    
    printf("%02d:%02d:%02d\n", hour_res, minutes_res, seconds_res);
    return 0;
}