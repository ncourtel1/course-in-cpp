#include <iostream>

int main() {

   /*
   Type conversion refers to converting a value from one data type to another.
      Implicit conversion = automatic (done by the compiler).
      Explicit conversion = manually done by the programmer (casting).
   */

   // Explicit conversion
   double x = (int) 3.14; // Convert 3.14 into an int and store the result in a double variable (result x = 3)
   std::cout << x << '\n'; // Output: 3.0 (since 3.14 was cast to 3)

   // Implicit conversion
   char y = 100; // Convert 100 to its corresponding ASCII character, here 'd'
   std::cout << y << '\n'; // Output: 'd'

   // Explicit version of the conversion
   std::cout << (char) 100 << '\n'; // Output: 'd' (explicitly casting 100 to a char)

   // Calculating score
   int correct = 8;
   int questions = 10;
   // Explicitly converting questions to double to ensure correct floating-point division
   double score = correct / (double) questions * 100; // Without the cast, score would be 0 (integer division)
   std::cout << score << "%" << '\n'; // Output: 80% (since 8 / 10 * 100 = 80.0)

   return 0;
}