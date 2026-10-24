// Square (persegi)
#include <iostream>

int main() {
  int a;

  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Yuks, kita hitung bangun datar." << "\n" << "Mulai dari persegi dulu ya?" << std::endl;
  std::cout << "Sisi: ";
  std::cin >> a;
  
  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Luas persegi: " << a * a << std::endl;
  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling persegi: " << 4 * a << std::endl;

}
