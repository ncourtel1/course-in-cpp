#include <iostream>

using std::cout, std::cin, std::endl;

double square(double x){
   return x*x;
}

void print_square(double x){
   cout << "The square of " << x << " is: " << square(x) << endl;
}

int main() {
   double number;
   cout << "Choose a number: ";
   cin >> number;

   print_square(number);

   return 0;
}