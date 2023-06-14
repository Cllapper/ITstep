#include <iostream>
#include <cmath>

int main() {
    // ЗАДАНИЕ 1
    int a;
    std::cout << "Введите значение a: ";
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    std::cout << "Сумма целых чисел от " << a << " до 500: " << sum << std::endl;

    // ЗАДАНИЕ 2
    int x, y;
    std::cout << "Введите целое число x: ";
    std::cin >> x;
    std::cout << "Введите целое число y: ";
    std::cin >> y;

    int result = pow(x, y);

    std::cout << x << " в степени " << y << " = " << result << std::endl;

    // ЗАДАНИЕ 3
    int sum = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
    }

    double average = static_cast<double>(sum) / 1000;

    std::cout << "Среднее арифметическое всех целых чисел от 1 до 1000: " << average << std::endl;

    // ЗАДАНИЕ 4
    int a;
    std::cout << "Введите значение a (1 <= a <= 20): ";
    std::cin >> a;

    int product = 1;
    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    std::cout << "Произведение всех целых чисел от " << a << " до 20: " << product << std::endl;

    // ЗАДАНИЕ 5
    int k;
    std::cout << "Введите номер варианта k: ";
    std::cin >> k;

    for (int i = 2; i <= 10; ++i) {
        std::cout << k << " x " << i << " = " << k * i << std::endl;
    }

    return 0;
}
