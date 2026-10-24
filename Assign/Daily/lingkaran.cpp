// Circle (lingkaran)
#include <iostream>

int main() {
    double r;
    double pi = 3.14;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": lingkaran kita pakai pi (3.14)" << std::endl;

    std::cout << "jari-jari: ";
    std::cin >> r;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": luas lingkaran: " << pi * r * r << std::endl;
    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": keliling lingkaran: " << 2 * pi * r << std::endl;

    return 0;
}
