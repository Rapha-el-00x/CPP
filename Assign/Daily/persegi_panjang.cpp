// Square (persegi)
#include <iostream>

int main() {
  int b, c;

  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Yuks, kita hitung bangun datar." << "\n" << "Sekarang kita hitung persegi panjang." << std::endl;
  std::cout << "Panjang: ";
  std::cin >> b;
  std::cout << "Lebar: ";
  std::cin >> c;
  
  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Luas persegi panjang: " << b * c << std::endl;
  std::cout << "\033[33m" << "Rafa" << "\033[0m" << ": Keliling persegi panjang: " << 2 * (b + c) << std::endl;

}



