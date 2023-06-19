#include <iostream>

int main() {
    int choice;
    std::cout << "Выберите задание (1-4): ";
    std::cin >> choice;

    // Задание 1
    if (choice == 1) {
        int number;
        std::cout << "Введите число: ";
        std::cin >> number;

        int count = 0;
        int sum = 0;
        int zeros = 0;

        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            count++;
            sum += digit;
            if (digit == 0) {
                zeros++;
            }
            temp /= 10;
        }

        float average = static_cast<float>(sum) / count;

        std::cout << "Количество цифр: " << count << std::endl;
        std::cout << "Сумма цифр: " << sum << std::endl;
        std::cout << "Среднее арифметическое: " << average << std::endl;
        std::cout << "Количество нулей: " << zeros << std::endl;
    }

    // Задание 2
    if (choice == 2) {
        int size;
        std::cout << "Введите размер клеточки: ";
        std::cin >> size;

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < size; k++) {
                    if ((i + j) % 2 == 0) {
                        for (int l = 0; l < size; l++) {
                            std::cout << "*";
                        }
                    } else {
                        for (int l = 0; l < size; l++) {
                            std::cout << "-";
                        }
                    }
                }
                std::cout << "-";
            }
            std::cout << std::endl;
        }
    }

    // Задание 3
    if (choice == 3) {
        int numPeople;
        std::cout << "Введите количество человек: ";
        std::cin >> numPeople;

        float totalCost = 0.0;

        for (int i = 1; i <= numPeople; i++) {
            std::cout << "Заказ для человека " << i << ":" << std::endl;

            // Вывод меню и выбор элементов заказа
            // Расчет стоимости заказа для текущего человека

            float personCost;
            std::cout << "Введите стоимость заказа для человека " << i << ": ";
            std::cin >> personCost;

            totalCost += personCost;
        }

        std::cout << "Общая сумма заказа: " << totalCost << std::endl;
    }

    // Задание 4
    if (choice == 4) {
        char columns[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
        int rows = 10;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << columns[j] << i << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
