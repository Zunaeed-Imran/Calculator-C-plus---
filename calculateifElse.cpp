#include <iostream>
using namespace std;

int main () {
  int n1, n2;
  string symbol;

  cout << "Enter 1st number: ";
  cin >> n1;

  cout << "Enter 2nd number: ";
  cin >> n2;

  cout << "Enter symbol: ";
  cin >> symbol;

  if (symbol == "+") {
    cout << n1 + n2;
  }

  else if ( symbol == "-") {
    cout << n1 - n2;
  }

  else if ( symbol == "*") {
    cout << n1 * n2;
  }

  else if ( symbol == "/") {
    cout << n1 / n2;
  }

  else {
    cout << "Input incorrect! ";
  }
  return 0;
}