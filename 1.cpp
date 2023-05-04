#include <iostream>

int main() {
    double distance, speed;
    std::cout << "Введите расстояние в километрах: ";
    std::cin >> distance;
    std::cout << "Введите скорость в метрах в секунду: ";
    std::cin >> speed;

    double time = distance * 1000 / speed; // расчет времени в секундах
    int hours = time / 3600;
    int minutes = (time - hours * 3600) / 60;
    int seconds = time - hours * 3600 - minutes * 60;

    std::cout << "Время в пути: " << hours << " часов " << minutes << " минут " << seconds << " секунд" << std::endl;

    return 0;
}