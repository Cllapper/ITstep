#include <iostream>

using namespace std;

int main()
{
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;
    cout << "Enter the start time (hh mm ss): ";
    cin >> startHour >> startMinute >> startSecond;
    cout << "Enter the end time (hh mm ss): ";
    cin >> endHour >> endMinute >> endSecond;

    int duration = (endHour - startHour) * 3600 + (endMinute - startMinute) * 60 + (endSecond - startSecond);
    double cost = duration * 0.15 / 60;

    cout << "Cost: " << cost << " rubles" << endl;

    return 0;
}
