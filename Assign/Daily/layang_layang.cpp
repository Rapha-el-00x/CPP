// Kite (layang-layang)
#include <iostream>

int main() {
    double a, b, d1, d2;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Oks, yuk kita hitung layang-layang!!" << std::endl;

    std::cout << "sisi pertama: ";
    std::cin >> a;

    std::cout << "Sisi  yang kedua: ";
    std::cin >> b;

    std::cout << "diagonal yang pertama: ";
    std::cin >> d1;

    std::cout << "Diagonal yang kedua: ";
    std::cin >> d2;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Luas layang-layang: " << 0.5 * d1 * d2 << std::endl;

    std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling layang-layang: " << 2 * (a + b) << std::endl;

    return 0;
}
