#include <iostream>

using namespace std;

int main()
{
    double a, b, x;
    cout << "Введите a и b: ";
    cin >> a >> b;
    if (a == 0 && b == 0) {
        cout << "Уравнение имеет бесконечное множество решений" << endl;
    } else if (a == 0 && b != 0) {
        cout << "Уравнение не имеет решений" << endl;
    } else {
        x = -b / a;
        cout << "Корень уравнения " << a << "x + " << b << " = 0: " << x << endl;
    }
    return 0;
}
