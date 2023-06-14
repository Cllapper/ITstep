#include <iostream>
#include <set>
#include <cmath>

int main() {
    // ЗАДАНИЕ 1
    int count1 = 0;
    for (int num = 100; num <= 999; ++num) {
        int digit1 = num % 10;
        int digit2 = (num / 10) % 10;
        int digit3 = num / 100;
        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
            count1++;
        }
    }
    std::cout << "Количество чисел с двумя одинаковыми цифрами: " << count1 << std::endl;

    // ЗАДАНИЕ 2
    int count2 = 0;
    for (int num = 100; num <= 999; ++num) {
        int digit1 = num % 10;
        int digit2 = (num / 10) % 10;
        int digit3 = num / 100;
        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3) {
            count2++;
        }
    }
    std::cout << "Количество чисел с разными цифрами: " << count2 << std::endl;

    // ЗАДАНИЕ 3
    int number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    int result = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }

    std::cout << "Число после удаления цифр 3 и 6: " << result << std::endl;

    // ЗАДАНИЕ 4
    int a;
    std::cout << "Введите целое число А: ";
    std::cin >> a;

    std::cout << "Числа В, для которых " << a << " делится без остатка на В*В и не делится без остатка на В*В*В: ";
    for (int b = 1; b <= a; ++b) {
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            std::cout << b << " ";
        }
    }
    std::cout << std::endl;

    // ЗАДАНИЕ 5
    int number5;
    std::cout << "Введите целое число А: ";
    std::cin >> number5;

    int sum_of_digits = 0;
    int temp_number = number5;

    while (temp_number != 0) {
        int digit = temp_number % 10;
        sum_of_digits += digit;
        temp_number /= 10;
    }

    int cube = sum_of_digits * sum_of_digits * sum_of_digits;

    if (cube == number5 * number5) {
        std::cout << "Куб суммы цифр числа равен квадрату числа." << std::endl;
    } else {
        std::cout << "Куб суммы цифр числа НЕ равен квадрату числа." << std::endl;
    }

    // ЗАДАНИЕ 6
    int number6;
    std::cout << "Введите целое число: ";
    std::cin >> number6;

    std::cout << "Числа, на которые " << number6 << " делится без остатка: ";
    for (int i = 1; i <= number6; ++i) {
        if (number6 % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    // ЗАДАНИЕ 7
    int number7_1, number7_2;
    std::cout << "Введите два целых числа: ";
    std::cin >> number7_1 >> number7_2;

    std::set<int> common_divisors;

    for (int i = 1; i <= number7_1 && i <= number7_2; ++i) {
        if (number7_1 % i == 0 && number7_2 % i == 0) {
            common_divisors.insert(i);
        }
    }

    std::cout << "Общие делители: ";
    for (int divisor : common_divisors) {
        std::cout << divisor << " ";
    }
    std::cout << std::endl;

    return 0;
}
