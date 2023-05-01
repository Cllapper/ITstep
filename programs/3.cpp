#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num, exponent, result;
    cout << "Введите число и степень: ";
    cin >> num >> exponent;
    result = pow(num, exponent);
    cout << num << " в степени " << exponent << " равно " << result << endl;
    return 0;
}
