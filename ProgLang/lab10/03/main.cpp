#include <iostream>

int main() {
    int a = 6;
    int b = 3;

    int mul = a * b;
    int *p = &a;
    int val = *p;

    int &ref = a;
    int bit_and = a & b;

    std::cout << "a * b = " << mul << std::endl;
    std::cout << "*p = " << val << std::endl;
    std::cout << "&a = " << p << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "a & b = " << bit_and << std::endl;

    return 0;
}
