// Triangle (segitiga)
#include <iostream>

int main() {
    double a, b, c, t;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": ok deh, kita hitung yang SEGITIGA" << std::endl;

    std::cout << "Alas: ";
    std::cin >> a;

    std::cout << "Sisi dua: ";
    std::cin >> b;

    std::cout << "Sisi tiga: ";
    std::cin >> c;

    std::cout << "tinggi: ";
    std::cin >> t;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Luas segitiga: " << 0.5 * a * t << std::endl;
    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling segitiga: " << a + b + c << std::endl;

    return 0;
}
