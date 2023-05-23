#include <iostream>

int main() {
    int num;
    std::cout << "Введите трехзначное число: ";
    std::cin >> num;

    // Извлекаем цифры
    int firstDigit = num / 100;
    int lastDigit = num % 10;

    // Формируем новое число без средней цифры
    int newNum = firstDigit * 10 + lastDigit;

    std::cout << "Новое число: " << newNum << std::endl;

    return 0;
}
