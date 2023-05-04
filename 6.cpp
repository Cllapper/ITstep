#include <iostream>

using namespace std;

int main()
{
    double distance, time;
    cout << "Enter the distance (km): ";
    cin >> distance;
    cout << "Enter the time (minutes): ";
    cin >> time;

    double speed = distance / (time / 60);

    cout << "Speed: " << speed << " km/h" << endl;

    return 0;
}
