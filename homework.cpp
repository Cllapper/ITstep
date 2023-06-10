#include <iostream>

using namespace std;

int main() {
    // Задача 1
    int x1, y1, x2, y2;
    cout << "1. Введите координаты первой точки (x1 y1): ";
    cin >> x1 >> y1;
    cout << "   Введите координаты второй точки (x2 y2): ";
    cin >> x2 >> y2;

    if (x1 == x2)
        cout << "   Прямая параллельна оси ординат." << endl;
    else if (y1 == y2)
        cout << "   Прямая параллельна оси абсцисс." << endl;
    else
        cout << "   Прямая не параллельна ни одной из осей." << endl;

    // Задача 2
    double number;
    cout << "2. Введите число: ";
    cin >> number;

    int integerPart = static_cast<int>(number);
    double decimalPart = number - integerPart;

    if (decimalPart != 0.0)
        cout << "   Число имеет вещественную часть." << endl;
    else
        cout << "   Число не имеет вещественной части." << endl;

    // Задача 3
    int hours, minutes, seconds;
    cout << "3. Введите текущее время (часы минуты секунды): ";
    cin >> hours >> minutes >> seconds;

    bool isValidTime = (hours >= 0 && hours < 24) &&
                       (minutes >= 0 && minutes < 60) &&
                       (seconds >= 0 && seconds < 60);

    if (isValidTime)
        cout << "   Время корректное." << endl;
    else
        cout << "   Время некорректное." << endl;

    // Задача 4
    int ticketNumber;
    cout << "4. Введите номер билета: ";
    cin >> ticketNumber;

    int digit1 = ticketNumber / 100000;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit6 = ticketNumber % 10;

    if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6))
        cout << "   Билет является счастливым." << endl;
    else
        cout << "   Билет не является счастливым." << endl;

    // Задача 5*
    int day, month, year;
    cout << "5*. Введите дату (день месяц год): ";
    cin >> day >> month >> year;

    int daysInMonth = 0;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            cout << "   Некорректный месяц." << endl;
            return 0;
    }

    if (day < 1 || day > daysInMonth) {
        cout << "   Некорректный день." << endl;
        return 0;
    }

    day++;
    if (day > daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    cout << "   Завтра будет: " << day << " " << month << " " << year << endl;

    return 0;
}
