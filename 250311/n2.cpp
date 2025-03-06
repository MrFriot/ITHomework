/*
 * RU: Напишите программу, которая при вводе целого числа определяет,
 *     является ли число четным и кратным.
 * EN: Write a program that, when an integer is input,
 *     determines whether the number is even and a multiple of the integer.
 */

#include <iostream>


int main() {
    int num;
    std::cin >> num;
    if (num % 2 == 0)
        std::cout << num << " is even." << std::endl;
    else
        std::cout << num << " is odd." << std::endl;
    return 0;
}
