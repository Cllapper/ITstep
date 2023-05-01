#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double radius, area, length;
    cout << "Введите радиус окружности: ";
    cin >> radius;
    area = PI * pow(radius, 2);
    length = 2 * PI * radius;
    cout << "Площадь окружности: " << area << endl;
    cout << "Длина окружности: " << length << endl;
    return 0;
}
