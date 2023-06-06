#include <iostream>
using namespace std;

int main() {
    int choice;
    int score = 0;

    cout << "Выберите задание: " << endl;
    cout << "1. Определение названия дня недели." << endl;
    cout << "2. Игра 'О, счастливчик!'." << endl;
    cin >> choice;

    if (choice == 1) {
        // Задание 1: Определение названия дня недели

        int dayNumber;

        cout << "Введите номер дня недели (1-7): ";
        cin >> dayNumber;

        switch (dayNumber) {
            case 1:
                cout << "Понедельник" << endl;
                break;
            case 2:
                cout << "Вторник" << endl;
                break;
            case 3:
                cout << "Среда" << endl;
                break;
            case 4:
                cout << "Четверг" << endl;
                break;
            case 5:
                cout << "Пятница" << endl;
                break;
            case 6:
                cout << "Суббота" << endl;
                break;
            case 7:
                cout << "Воскресенье" << endl;
                break;
            default:
                cout << "Неверный номер дня недели!" << endl;
                break;
        }
    } else if (choice == 2) {
        // Задание 2

        cout << "Добро пожаловать в игру 'О, счастливчик!'." << endl;
        cout << "Ответьте на следующие вопросы." << endl;

        // Вопрос 1
        cout << "Вопрос 1: Сколько будет 2 + 2?" << endl;
        cout << "a) 3" << endl;
        cout << "b) 4" << endl;
        cout << "c) 5" << endl;

        char answer1;
        cin >> answer1;

        if (answer1 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        } else {
            cout << "Неправильно! Игра окончена." << endl;
            return 0;
        }

        // Вопрос 2
        cout << "Вопрос 2: Какое из чисел является простым?" << endl;
        cout << "a) 20" << endl;
        cout << "b) 13" << endl;
        cout << "c) 36" << endl;

        char answer2;
        cin >> answer2;

        if (answer2 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        } else {
            cout << "Неправильно! Игра окончена." << endl;
            return 0;
        }

        // Вопрос 3
        cout << "Вопрос 3: Какое животное является символом США?" << endl;
        cout << "a) Орел" << endl;
        cout << "b) Сокол" << endl;
        cout << "c) Жаворонок" << endl;

        char answer3;
        cin >> answer3;

        if (answer3 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        } else {
            cout << "Неправильно! Игра окончена." << endl;
            return 0;
        }

        // Вопрос 4
        cout << "Вопрос 4: Какой год был провозглашен первым годом новой эры (Anno Domini)?" << endl;
        cout << "a) 1 год" << endl;
        cout << "b) 1000 год" << endl;
        cout << "c) 476 год" << endl;

        char answer4;
        cin >> answer4;

        if (answer4 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        } else {
            cout << "Неправильно! Игра окончена." << endl;
            return 0;
        }

        // Вопрос 5
        cout << "Вопрос 5: Кто написал роман 'Война и мир'?" << endl;
        cout << "a) Лев Толстой" << endl;
        cout << "b) Федор Достоевский" << endl;
        cout << "c) Иван Тургенев" << endl;

        char answer5;
        cin >> answer5;

        if (answer5 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        } else {
            cout << "Неправильно! Игра окончена." << endl;
            return 0;
        }

        cout << "Поздравляем! Вы ответили правильно на все вопросы!" << endl;
        cout << "Ваш итоговый счет: " << score << "/" << 5 << endl;
    } else {
        cout << "Неверный выбор задания!" << endl;
    }

    return 0;
}
