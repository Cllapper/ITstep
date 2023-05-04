#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    std::cout << "Введите первое дробное число: ";
    std::cin >> num1;
    std::cout << "Введите второе дробное число: ";
    std::cin >> num2;

    int sum_int = static_cast<int>(num1) + static_cast<int>(num2); // сумма целых частей
    double sum_frac = std::abs(num1 - static_cast<int>(num1)) + std::abs(num2 - static_cast<int>(num2)); // сумма дробных частей
    std::cout << "Сумма целых частей: " << sum_int << std::endl;
    std::cout << "Сумма дробных частей: " << sum_frac << std::endl;

    return 0;
}
