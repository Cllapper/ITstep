#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Введите два трехзначных числа: ";
    std::cin >> num1 >> num2;

    // Извлекаем средние цифры
    int midDigitNum1 = (num1 / 10) % 10;
    int midDigitNum2 = (num2 / 10) % 10;

    // Меняем средние цифры
    int newNum1 = num1 - midDigitNum1 * 10 + midDigitNum2 * 10;
    int newNum2 = num2 - midDigitNum2 * 10 + midDigitNum1 * 10;

    std::cout << "Новые числа: " << newNum1 << " и " << newNum2 << std::endl;

    return 0;
}
