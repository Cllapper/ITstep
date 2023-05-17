#include <iostream>
using namespace std;

int main() {
    int totalStudents, debtors;
    cout << "Введите количество студентов: ";
    cin >> totalStudents;
    cout << "Введите количество должников: ";
    cin >> debtors;

    // Вычисляем процент должников от общего числа студентов
    double percentage = (debtors * 100.0) / totalStudents;

    cout << "Процент должников: " << percentage << "%" << endl;

    return 0;
}

