// Parallelogram (jajar genjang)
#include <iostream>

int main() {
    double a, b, t;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Okehhh, kita lanjut ke jajar genjang, ya?" << std::endl;

    std::cout << "Alas: ";
    std::cin >> a;

    std::cout << "Sisi miring: ";
    std::cin >> b;

    std::cout << "Tinggi: ";
    std::cin >> t;

    std::cout << "\n" << "\033[33m" << "Rafa" << "\033[0m" << ": Luas jajar genjang: " << a * t << std::endl;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling jajar genjang: " << 2 * (a + b) << std::endl;

    return 0;
}
