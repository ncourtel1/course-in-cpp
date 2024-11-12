#include <iostream>

using std::cout, std::cin;

int main() {
   int number;

   cout << "Choose a number between 1 and 3: ";
   cin >> number;

   switch (number)
   {
   case 1:
      cout << "You choose 1";
      break;
   case 2:
      cout << "You choose 2";
      break;
   case 3:
      cout << "You choose 3";
      break;
   default:
      cout << "Please enter a number (1-3)";
      break;
   }

   return 0;
}