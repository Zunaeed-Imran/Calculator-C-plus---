#include <iostream>

using namespace std;

int main () {
  int number1, number2, result;
  string symbol;

  cout << "Enter the 1st number: ";
  cin >> number1;

  cout << "Enter the 2nd number: ";
  cin >> number2;

  cout << "Enter The Symbol: ";
  cin >> symbol;


  cout << "The 1st Number is: " << number1 <<endl;
  cout << "The 2nd Number is: " << number2 << endl;
  cout << "The symbol is: " << symbol << endl;

  if (symbol == "+") {
    result = number1 + number2;
  }

  if (symbol == "-") {
    result = number1 - number2;
  }
  

  cout << "The result is: " << result << endl;

  return 0;
}