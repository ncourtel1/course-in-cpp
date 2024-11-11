#include <iostream> 
#include <cmath>     // Includes the cmath library for common math functions

int main() {
   double x = 3.14;  
   double y = 4;     
   double z;         

   z = std::max(x, y);  // Finds the maximum of x and y, stores the result in z
   std::cout << z << '\n';  // Outputs the maximum value

   z = std::min(x, y);  // Finds the minimum of x and y, stores the result in z
   std::cout << z << '\n';  // Outputs the minimum value

   z = pow(2, 8);  // Calculates 2 raised to the power of 8 (2^8), stores the result in z
   std::cout << z << '\n';  // Outputs 256 (2^8)

   z = sqrt(81);  // Calculates the square root of 81, stores the result in z
   std::cout << z << '\n';  // Outputs 9 (since sqrt(81) = 9)

   z = abs(-15);  // Calculates the absolute value of -15, stores the result in z
   std::cout << z << '\n';  // Outputs 15 (absolute value of -15)

   z = round(x);  // Rounds x (3.14) to the nearest integer, stores the result in z
   std::cout << z << '\n';  // Outputs 3 (since 3.14 is closer to 3 than to 4)

   z = ceil(x);  // Rounds x (3.14) up to the nearest integer, stores the result in z
   std::cout << z << '\n';  // Outputs 4 (the smallest integer greater than or equal to 3.14)

   z = floor(x);  // Rounds x (3.14) down to the nearest integer, stores the result in z
   std::cout << z << '\n';  // Outputs 3 (the largest integer less than or equal to 3.14)

   return 0;
}