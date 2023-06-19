#include <iostream>

int main() {
    int choice;

    do {
        std::cout << "Меню:" << std::endl;
        std::cout << "1. Нарисовать прямоугольник" << std::endl;
        std::cout << "2. Нарисовать треугольник" << std::endl;
        std::cout << "3. Выход" << std::endl;
        std::cout << "Выберите опцию: ";
        std::cin >> choice;

        // Задание 1: Нарисовать прямоугольник
        if (choice == 1) {
            int width, height;
            std::cout << "Введите ширину прямоугольника: ";
            std::cin >> width;
            std::cout << "Введите высоту прямоугольника: ";
            std::cin >> height;

            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
        }

        // Задание 2: Нарисовать треугольник
        if (choice == 2) {
            int height;
            std::cout << "Введите высоту треугольника: ";
            std::cin >> height;

            for (int i = 1; i <= height; i++) {
                for (int j = 1; j <= i; j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
        }

        std::cout << std::endl;
    } while (choice != 3);

    std::cout << "Выход из программы." << std::endl;

    return 0;
}
