#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius;
    cout << "Введите радиус Земли (в километрах): ";
    cin >> radius;

    // Расчет площади поверхности Земли
    double surfaceArea = 4 * PI * pow(radius, 2);

    cout << "Площадь поверхности Земли: " << surfaceArea << " квадратных километров." << endl;

    return 0;
}
