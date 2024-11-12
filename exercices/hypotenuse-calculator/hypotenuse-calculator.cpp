#include <iostream>
#include <cmath>

using std::cout, std::cin;

int main() {
   double a;
   double b;
   double c;

   cout << "Enter side a: ";
   cin >> a;

   cout << "Enter side b: ";
   cin >> b;

   c = sqrt(pow(a, 2) + pow(b, 2));

   cout << "The hypotenuse is: " << c << '\n';

   return 0;
}