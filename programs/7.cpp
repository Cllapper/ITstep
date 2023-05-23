#include <iostream>

int main() {
    double length, width, height;
    double paintPerSquareMeter;
    double windowAndDoorArea;
    double paintCostPerLiter;

    std::cout << "Введите длину комнаты: ";
    std::cin >> length;

    std::cout << "Введите ширину комнаты: ";
    std::cin >> width;

    std::cout << "Введите высоту комнаты: ";
    std::cin >> height;

    std::cout << "Введите расход краски на 1м2 стены в литрах: ";
    std::cin >> paintPerSquareMeter;

    std::cout << "Введите площадь окон и дверей: ";
    std::cin >> windowAndDoorArea;

    std::cout << "Введите стоимость 1 литра краски в гривнах: ";
    std::cin >> paintCostPerLiter;

    double wallArea = 2 * (length + width) * height;
    double totalPaintArea = wallArea - windowAndDoorArea;
    double paintAmount = totalPaintArea * paintPerSquareMeter;
    double totalCost = paintAmount * paintCostPerLiter;

    std::cout << "Количество краски: " << paintAmount << " литров" << std::endl;
    std::cout << "Общая стоимость краски: " << totalCost << " гривен" << std::endl;

    return 0;
}
