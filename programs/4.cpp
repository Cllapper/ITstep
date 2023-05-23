#include <iostream>

int main() {
    double depositAmount;
    double interestRate;

    std::cout << "Введите сумму денежного вклада в гривнах: ";
    std::cin >> depositAmount;

    std::cout << "Введите процент годовых, которые выплачивает банк: ";
    std::cin >> interestRate;

    double monthlyInterest = depositAmount * (interestRate / 100) / 12;

    std::cout << "Сумма денег, выплачиваемых банком вкладчику каждый месяц: " << monthlyInterest << std::endl;

    return 0;
}
