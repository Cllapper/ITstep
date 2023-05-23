#include <iostream>

int main() {
    double price;
    double amount;

    std::cout << "Введите стоимость товара: ";
    std::cin >> price;

    std::cout << "Введите сумму денег: ";
    std::cin >> amount;

    int quantity = amount / price;
    double change = amount - (quantity * price);

    std::cout << "Количество товара: " << quantity << std::endl;
    std::cout << "Сдача: " << change << std::endl;

    return 0;
}
