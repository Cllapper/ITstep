#include <iostream>

using namespace std;

int main()
{
    int totalSeconds;
    cout << "Enter the total seconds: ";
    cin >> totalSeconds;

    int remainingSeconds = 8 * 3600 - totalSeconds;
    int remainingHours = remainingSeconds / 3600;

    cout << "Remaining hours: " << remainingHours << endl;

    return 0;
}
