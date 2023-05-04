#include <iostream>

int main() {
    double amount;
    std::cout << "Введите сумму в гривнах: ";
    std::cin >> amount;

    int hryvnia = static_cast<int>(amount); // целая часть
    int kop = static_cast<int>((amount - hryvnia) * 100); // количество копеек
    std::cout << "Количество гривен: " << hryvnia << std::endl;
    std::cout << "Количество копеек: " << kop << std::endl;

    return 0;
}
