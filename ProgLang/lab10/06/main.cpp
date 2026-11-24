#include <iostream>

int main() {
    {
        double x = 0;
        double *d = &x;
        std::cout << "d =" << reinterpret_cast<size_t>(d) << std::endl;
        std::cout << "d+4 =" << reinterpret_cast<size_t>(d + 4) << std::endl;
        std::cout << "d-4 =" << reinterpret_cast<size_t>(d - 4) << std::endl;
        std::cout << "double: " << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
    }
    {
        int x = 0;
        int *d = &x;
        std::cout << "int:    " << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
    }
    {
        char x = 0;
        char *d = &x;
        std::cout << "char:   " << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
    }
    return 0;
}
