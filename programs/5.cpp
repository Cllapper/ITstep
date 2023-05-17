#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Введите время в секундах: ";
    cin >> seconds;

    // Вычисляем количество оставшихся секунд
    int remainingSeconds = 24 * 60 * 60 - seconds;

    // Преобразуем оставшиеся секунды в часы, минуты и секунды
    int hours = remainingSeconds / 3600;
    int minutes = (remainingSeconds % 3600) / 60;
    int secondsLeft = remainingSeconds % 60;

    cout << "Осталось " << hours << " часов " << minutes << " минут " << secondsLeft << " секунд до полуночи." << endl;

    return 0;
}
