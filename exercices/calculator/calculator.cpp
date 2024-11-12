#include <iostream>

using std::cout, std::cin;

void print_calculator(int num1, int num2, char op){
   switch (op)
   {
   case '+':
      cout << "The result is " << num1 + num2 << '\n';
      break;
   case '-':
      cout << "The result is " << num1 - num2 << '\n';
      break;
   case '/':
      cout << "The result is " << num1 / num2 << '\n';
      break;
   case '*':
      cout << "The result is " << num1 * num2 << '\n';
      break;
   
   default:
   cout << "Enter valid number and operator";
      break;
   }
}

int main() {

   char op;
   double num1;
   double num2;
   double result;

   cout << "********** CALCULATOR **********\n";

   cout << "Enter an operator (+ - / *): ";
   cin >> op;

   cout << "Enter number 1: ";
   cin >> num1;

   cout << "Enter number 2: ";
   cin >> num2;

   print_calculator(num1, num2, op);

   cout << "********************************\n";



   return 0;
}