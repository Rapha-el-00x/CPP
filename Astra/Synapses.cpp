#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  // Assign variables. 
  auto x = 5.0, y = 8.5;
  ++x;
  --y;
  auto e = 50, z = 20;
  // Can't be auto if specific.
  int west, east;
  std::cout << "Hello, World!" << std::endl;
  // Arithmetic.
  std::cout << "X is: " << x << std::endl;
  std::cout << "While Y is: " << y << std::endl;
  std::cout << "Division with X and Y is: " << x / y << std::endl;
  std::cout << "A modulo of Z and E is: " << e % z << "%" << std::endl;
  std::cout << "Input the variable 'West' with any number to be multipled by 5: ";
  std::cin >> west; 
  std::cout << "Input the variable 'East' with any number to be multipled by 10: ";
  std::cin >> east;
  // Multiple by 5, and 10 with the compound "*="
  west *= 5;
  east *= 10;
  std::cout << "West after multiplied: " << west << std::endl;
  std::cout << "While East after multiplied: " << east << std::endl;
  // Check which is greater. (Basic Comparison)
  if (west == east) {
    std::cout << "Neither is greater." << std::endl;
  } else if (west >= east) {
    std::cout << "West Value is greater than East." << std::endl;
  } else {
    std::cout << "East's Value is greater than West." << std::endl;
  }
  
  // New Line (Comparison Mixed With Compound If else, and Logical Operators)
  std::string psswd;
  std::string Fname, Lname;
  std::cout << "\n" << "\t\t --- LOGIN --- " << std::endl;
  std::cout << "What is your first name? ";
  std::cin >> Fname;
  std::cout << "What is your last name? ";
  std::cin >> Lname;
  std::cout << "\nPassword shouldn't be less than 5, nor more than 12." << std::endl;
  std::cout << "Input Your Password: ";
  std::cin >> psswd;

  // start the if else
  if (psswd.length() < 5) {
    std::cout << "Password is too short!" << std::endl;
    exit(0);
  } else if (psswd.length() > 12) {
    std::cout << "Password is too long!" << std::endl;
    exit(0);
  } else {
    std::cout << "\n\t\t\tYou're Logged In." << std::endl;
    std::cout << "\t\t     Welcome back, " << Fname + " " + Lname << "." << std::endl;
  }

  return 0;

}
