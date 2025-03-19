/*
 * RU: Напишите программу, которая в последовательности целых чисел
 *     определяет сумму положительных чисел, оканчивающихся на 355.
 *     Программа получает на вход сначала количество чисел, а затем сами числа.
 *     В последовательности есть хотя бы одно число, оканчивающееся на 355.
 *     Программа должна вывести сумму чисел, оканчивающихся на 355.
 * EN: Write a program that determines the sum of positive numbers
 *     ending in 355 in a sequence of integers. The program receives
 *     as input first the number of numbers and then the numbers themselves.
 *     There is at least one number in the sequence ending in 355.
 *     The program must output the sum of numbers ending in 355.
 * SAMPLE:
 *      INPUT | OUTPUT
 *     -------+--------
 *      5     | 22710
 *      10355 |
 *      1289  |
 *      115   |
 *      -4355 |
 *      12355 |
 */

#include <iostream>


int main() {
    int sum = 0, n; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num; std::cin >> num;
        if (num % 1000 == 355)
            sum += num;
    }
    std::cout << sum << std::endl;
    return 0;
}
