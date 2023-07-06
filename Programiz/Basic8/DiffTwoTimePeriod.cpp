// Program to Calculate Difference Between Two Time Period

#include <iostream>
using namespace std;

void computeTimeDifference(struct TIME, struct TIME, struct TIME *);

struct TIME
{
    int seconds;
    int minutes;
    int hours;
};

int main()
{
    struct TIME t1, t2, difference;

    cout << "Enter start time." << endl;
    cout << "Enter hours, munutes, and seconds: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, munutes, and seconds: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    computeTimeDifference(t1, t2, &difference);

    cout << endl
         << "Time Difference : " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;

    cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;

    return 0;
}

void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference)
{
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diff = seconds2 - seconds1;

    difference->hours = diff / 3600;
    difference->minutes = (diff % 3600) / 60;
    difference->seconds = (diff % 3600) % 60;
}
