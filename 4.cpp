#include <iostream>

int main() {
    int seconds;
    std::cout << "Введите время в секундах: ";
    std::cin >> seconds;

    int days = seconds / 86400;
    seconds %= 86400;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;

    std::cout << "Время: " << days << " дней " << hours << " часов " << minutes << " минут " << seconds << " секунд" << std::endl;

    return 0;
}
