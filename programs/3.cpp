#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number;
    cout << "Введите дробное число: ";
    cin >> number;

    // Округляем число до двух знаков после запятой
    double roundedNumber = round(number * 100) / 100;

    cout << "Округленное число: " << fixed << setprecision(2) << roundedNumber << endl;

    return 0;
}
