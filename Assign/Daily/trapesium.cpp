// Trapezoid (trapesium)
#include <iostream>

int main() {
    double a, b, c, d, t;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Sekarang trapesium." << std::endl;

    std::cout << "Sisi sejajar yang pertama: ";
    std::cin >> a;

    std::cout << "sisi sejajar kedua: ";
    std::cin >> b;

    std::cout << "sisi miring pertama: ";
    std::cin >> c;

    std::cout << "Sisi miring kedua: ";
    std::cin >> d;

    std::cout << "lalu tinggi nya: ";
    std::cin >> t;

    std::cout << "\n" << "\033[33m" << "Rafa" << "\033[0m" << ": Jadi, luas trapesium itu: " << 0.5 * (a + b) * t << std::endl;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Dan keliling trapesium: " << a + b + c + d << std::endl;

    return 0;
}
