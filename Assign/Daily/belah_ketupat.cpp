// Rhombus (belah ketupat)
#include <iostream>

int main() {
    double s, d1, d2;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": ok next kita hitung belah ketupat (keren bngt)" << std::endl;

    std::cout << "hitung sisiny: ";
    std::cin >> s;

    std::cout << "diagonal pertama: ";
    std::cin >> d1;

    std::cout << "diagonal kedua: ";
    std::cin >> d2;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ":luas belah ketupat: " << 0.5 * d1 * d2 << std::endl;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling belah ketupat: " << 4 * s << std::endl;

    return 0;
}
