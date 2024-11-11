#include <iostream>

int main() {
   // The const keyword specifies that a variable's value is constant tells the compiler to prevent anything from modifying it
   // Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.

   const double PI = 3.14159; // It's common to use capitalized variable name for const
   double radius = 10;
   double circumference = 2 * PI * radius;

   std::cout << circumference << "cm";

   return 0;
}