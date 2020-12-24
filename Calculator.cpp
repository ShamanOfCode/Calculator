#include <iostream>

using namespace std;

int main() {
  int number1;
  int number2;
  string sign; // *  /  +  -
  int sum;

  cout << "Enter a number: ";
  cin >> number1;

  cout << "Enter second number: ";
  cin >> number2;

  cout << "Enter the sign you want to expect: ";
  cin >> sign;

  if(sign == "*") {
    sum = number1 * number2;
    cout << sum << endl;
  }

  if(sign == "/") {
    if(number2 == 0) {
      cout << "You can't divide by 0" << endl;
    } else {
      sum = number1 / number2;
      cout << sum << endl;
    }
  }

  if(sign == "+") {
    sum = number1 + number2;
    cout << sum << endl;
  }

  if(sign == "-") {
    sum = number1 - number2;
    cout << sum << endl;
  }

  cout << "Program ended successfully!!" << endl;

  return 0;
}
