#include <iostream>

int main() {
  int number1;
  int number2;

  std::cout << "Enter a number: ";
  std::cin >> number1;
  std::cout << "Enter second number: ";
  std::cin >> number2;

  int sum = number1 + number2;
  std::cout << sum << std::endl;

  return 0;
}
