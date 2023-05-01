#include <iostream>

using namespace std;

int main()
{
    double a, b, c, avg;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}
