#include <iostream>

const double poundsToGrams = 453.592;

int main() {
    double pounds;
    std::cout << "Введите значение в фунтах: ";
    std::cin >> pounds;

    double kilograms = pounds * poundsToGrams / 1000;
    std::cout << "Вес в килограммах: " << kilograms << std::endl;

    double convertedPounds = kilograms * 1000 / poundsToGrams;
    std::cout << "Обратная конвертация: " << convertedPounds << " фунтов" << std::endl;

    return 0;
}
