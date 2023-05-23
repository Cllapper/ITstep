#include <iostream>

int main() {
    int number;
    std::cout << "Введите пятизначное число: ";
    std::cin >> number;

    int lastTwoDigits = number % 100;
    int remainingDigits = number / 100;

    int newNumber = lastTwoDigits * 10000 + remainingDigits;

    std::cout << "Новое число: " << newNumber << std::endl;

    return 0;
}
