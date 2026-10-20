#include <iostream>

int main() {
  bool sedang_hujan = true;
  bool tidak_hujan = false;
  int apakahhujan;
  std::cin >> apakahhujan;
  if (apakahhujan != sedang_hujan) {
    std::cout << "Nggak hujan bro... astaga..." << std::endl;
  } else {
    std::cout << "Yay! Hujan!" << std::endl;
  }

}
