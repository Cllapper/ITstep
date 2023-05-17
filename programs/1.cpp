#include <iostream>
using namespace std;

int main() {
    double size, speed;
    cout << "Введите размер фильма в ГБ: ";
    cin >> size;
    cout << "Введите скорость интернет-соединения в Мб/с: ";
    cin >> speed;

    // Конвертируем размер фильма в мегабайты
    double sizeInMB = size * 1024;

    // Вычисляем время скачивания в секундах
    double timeInSeconds = sizeInMB / (speed * 8);

    // Преобразуем время в часы, минуты и секунды
    int hours = timeInSeconds / 3600;
    int minutes = (int(timeInSeconds) % 3600) / 60;
    int seconds = int(timeInSeconds) % 60;

    cout << "Время скачивания: " << hours << " часов " << minutes << " минут " << seconds << " секунд." << endl;

    return 0;
}

