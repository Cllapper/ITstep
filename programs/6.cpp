#include <iostream>
using namespace std;

int main() {
    double principalAmount, interestRate;
    int months;
    cout << "Введите сумму вклада в гривнах: ";
    cin >> principalAmount;
    cout << "Введите срок вклада в месяцах: ";
    cin >> months;
    cout << "Введите процентную ставку за год: ";
    cin >> interestRate;

    // Вычисляем конечную сумму с учетом процентов
    double finalAmount = principalAmount + (principalAmount * interestRate * months) / (12 * 100);

    cout << "Конечная сумма: " << finalAmount << " гривен." << endl;

    return 0;
}
