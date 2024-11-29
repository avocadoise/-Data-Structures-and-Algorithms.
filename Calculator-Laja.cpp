# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator:( +, -, *, /): ";
  cin >> op;

  cout << "Enter First Num: "; cin >> num1;
  cout << "Enter Enter Second NUm: ";  cin >> num2;

  switch(op) {

    case '+':
      cout << "Result: "; cout << num1 + num2;
      break;

    case '-':
      cout << "Result: "; cout << num1 - num2;
      break;

    case '*':
      cout << "Result: "; cout<< num1 * num2;
      break;

    case '/':
      cout << "Result: "; cout << num1 / num2;
      break;

    default:
      cout << "Wrong op";
      break;
  }

  return 0;
}