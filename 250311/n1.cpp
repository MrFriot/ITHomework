/*
 * RU: Напишите программу, которая выводит
 *     максимальное и минимальное среди трех целых чисел.
 * EN: Write a program that outputs
 *     the maximum and minimum among three integers.
 */

#include <iostream>


int main() {
    int max = -1e9, min = 1e9, num;

    for (int i = 0; i < 3; ++i) {
        std::cin >> num;
        max = std::max(num, max);
        min = std::min(num, min);
    }
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    return 0;
}
