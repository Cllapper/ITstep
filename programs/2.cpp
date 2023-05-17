#include <iostream>
using namespace std;

int main() {
    int flashDriveSize;
    cout << "Введите размер флешки в ГБ: ";
    cin >> flashDriveSize;

    // Конвертируем размер флешки в мегабайты
    int flashDriveSizeInMB = flashDriveSize * 1024;

    // Вычисляем количество фильмов, помещающихся на флешку
    int moviesCount = flashDriveSizeInMB / 760;

    cout << "На флешку поместится " << moviesCount << " фильмов." << endl;

    return 0;
}
