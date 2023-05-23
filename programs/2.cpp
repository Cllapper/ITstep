#include <iostream>

int main() {
    int num;
    std::cout << "Введите 4-значное число: ";
    std::cin >> num;

    // Извлекаем цифры
    int firstDigit = num / 1000;
    int secondDigit = (num / 100) % 10;
    int thirdDigit = (num / 10) % 10;
    int fourthDigit = num % 10;

    // Выполняем вычисления
    int sum = firstDigit + thirdDigit;
    int diff = secondDigit - fourthDigit;

    std::cout << "Сумма первой и третьей цифры: " << sum << std::endl;
    std::cout << "Разность второй и четвертой цифры: " << diff << std::endl;

    return 0;
}
