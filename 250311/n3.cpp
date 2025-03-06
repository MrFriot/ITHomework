/*
 * RU: Программа должна вывести "TRUE-YES",
 *     если число четное и кратное 3, и "FALSE-N" в обратном случае.
 * EN: The program should print "TRUE-YES"
 *     if the number is even and a multiple of 3, and "FALSE-N" otherwise.
 */

#include <iostream>


int main() {
    int num;
    std::cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
        std::cout << "TRUE-YES" << std::endl;
    else
        std::cout << "FALSE-N" << std::endl;
    return 0;
}
