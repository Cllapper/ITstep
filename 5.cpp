#include <iostream>

using namespace std;

int main()
{
    int totalSeconds;
    cout << "Enter the total seconds: ";
    cin >> totalSeconds;

    int days = totalSeconds / 86400;
    totalSeconds %= 86400;
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;

    return 0;
}
