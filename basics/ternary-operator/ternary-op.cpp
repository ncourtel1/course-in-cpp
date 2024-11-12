#include <iostream>

using std::cout;

int main() {
   /*
      Ternary operator ? can replace a if/else statement
      condition ? expression1 : expression2;
   */

   int grade = 45;
   grade >= 60 ? cout << "You pass!" : cout << "You fail\n";

   int number = 13;
   number % 2 == 0 ? cout << number << " is an even number\n" : cout << number << " is an odd number\n";


   bool hungry = false;
   cout << (hungry ? "You are hungry\n" : "You are full\n");

   return 0;
}