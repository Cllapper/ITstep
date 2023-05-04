#include <iostream>

using namespace std;

int main()
{
    double pricePerLaptop, discountPercentage;
    int quantity;
    cout << "Enter the price per laptop (rubles): ";
    cin >> pricePerLaptop;
    cout << "Enter the discount percentage (%): ";
    cin >> discountPercentage;
    cout << "Enter the quantity: ";
    cin >> quantity;

    double totalPrice = pricePerLaptop * quantity * (1 - discountPercentage / 100);

    cout << "Total price: " << totalPrice << " rubles" << endl;

    return 0;
}
