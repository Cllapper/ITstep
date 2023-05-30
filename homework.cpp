#include <iostream>

using namespace std;

int main() {
    // Задача 1: Ввести число и определить, чётное оно или нет
    int number;
    cout << "Введите число: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "Число чётное" << endl;
    } else {
        cout << "Число нечётное" << endl;
    }

    // Задача 2: Ввести три числа и найти наименьшее среди них
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    int minNumber = a;
    if (b < minNumber) {
        minNumber = b;
    }
    if (c < minNumber) {
        minNumber = c;
    }
    cout << "Наименьшее число: " << minNumber << endl;

    // Задача 3: Ввести число и выяснить, положительное оно, отрицательное или равно нулю
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (num > 0) {
        cout << "Число положительное" << endl;
    } else if (num < 0) {
        cout << "Число отрицательное" << endl;
    } else {
        cout << "Число равно нулю" << endl;
    }

    // Задача 4: Реализовать калькулятор
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    int choice;
    cout << "Меню:" << endl;
    cout << "1) Сложение" << endl;
    cout << "2) Вычитание" << endl;
    cout << "3) Умножение" << endl;
    cout << "4) Деление" << endl;
    cout << "Выберите операцию (1-4): ";
    cin >> choice;
    double result;
    bool valid = true;
    switch (choice) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                valid = false;
            }
            break;
        default:
            cout << "Ошибка: неправильный выбор операции!" << endl;
            valid = false;
            break;
    }
    if (valid) {
        cout << "Результат: " << result << endl;
    }
      // Задача 5
    char ch;
    std::cout << "Введите символ: ";
    std::cin >> ch;

    if (isdigit(ch)) {
        std::cout << "Символ является цифрой.\n";
    } else if (isalpha(ch)) {
        std::cout << "Символ является буквой.\n";
    } else if (ispunct(ch)) {
        std::cout << "Символ является знаком пунктуации.\n";
    } else {
        std::cout << "Символ не является ни цифрой, ни буквой, ни знаком пунктуации.\n";
    }

    // Задача 6
    int number, minRange, maxRange;
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Введите нижнюю границу диапазона: ";
    std::cin >> minRange;
    std::cout << "Введите верхнюю границу диапазона: ";
    std::cin >> maxRange;

    if (number >= minRange && number <= maxRange) {
        std::cout << "Число принадлежит диапазону.\n";
    } else {
        std::cout << "Число не принадлежит диапазону.\n";
    }

    // Задача 7
    int x, y;
    std::cout << "Введите число X: ";
    std::cin >> x;
    std::cout << "Введите число Y: ";
    std::cin >> y;

    if (x % y == 0) {
        std::cout << "Число X кратно числу Y.\n";
    } else {
        std::cout << "Число X не кратно числу Y.\n";
    }

    // Задача 8
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
        std::cout << "Число кратно 3, 5 и 7 одновременно.\n";
    } else {
        std::cout << "Число не кратно 3, 5 и 7 одновременно.\n";
    }

    // Задача Э
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    int absoluteValue = (number < 0) ? -number : number;
    std::cout << "Модуль введённого числа: " << absoluteValue << std::endl;

    // Задача 19
    int number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    int count = 0;
    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            count++;
            number /= 10;
        }
    }

    std::cout << "Количество цифр в числе: " << count << std::endl;

    // Задача 11
    int palindromeNumber;
    std::cout << "Введите пятизначное число: ";
    std::cin >> palindromeNumber;

    int temp = palindromeNumber;
    int reverseNumber = 0;
    while (temp != 0) {
        reverseNumber = reverseNumber * 10 + temp % 10;
        temp /= 10;
    }

    if (palindromeNumber == reverseNumber) {
        std::cout << "Число является палиндромом.\n";
    } else {
        std::cout << "Число не является палиндромом.\n";
    }

    // Задача 12
    int rectX1, rectY1, rectX2, rectY2, pointX, pointY;
    std::cout << "Введите координаты верхнего левого угла прямоугольника (X1, Y1): ";
    std::cin >> rectX1 >> rectY1;
    std::cout << "Введите координаты нижнего правого угла прямоугольника (X2, Y2): ";
    std::cin >> rectX2 >> rectY2;
    std::cout << "Введите координаты точки (X, Y): ";
    std::cin >> pointX >> pointY;

    if (pointX >= rectX1 && pointX <= rectX2 && pointY >= rectY1 && pointY <= rectY2) {
        std::cout << "Точка принадлежит прямоугольнику.\n";
    } else {
        std::cout << "Точка не принадлежит прямоугольнику.\n";
    }

    // Задача 13*
    int a, b, c, d;
    std::cout << "Введите 4 числа: ";
    std::cin >> a >> b >> c >> d;

    int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));
    std::cout << "Максимальное значение: " << max << std::endl;

    return 0;
}
