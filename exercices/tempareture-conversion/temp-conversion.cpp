#include <iostream>

using std::cout, std::cin;

int main(){

   double temp;
   char unit;

   cout << "********** Temperature Converion **********\n";
   cout << "F = Fahrenheit\n";
   cout << "C = Celsius\n";
   cout << "What unit would you like to conver to: ";
   cin >> unit;

   if (unit == 'F' || unit == 'f'){
      cout << "Enter a temperature in Celsius: ";
      cin >> temp;
      temp = temp * 1.8 + 32;
      cout << "Temperature is: " << temp << "C\n";
   } else if (unit == 'C' || unit == 'c'){
      cout << "Enter a temperature in Fahrenheit: ";
      cin >> temp;
      temp = (temp-32)/1.8;
      cout << "Temperature is: " << temp << "F\n";
   } else {
      cout << "Please enter a valid unit, C or F\n";
   }
   cout << "*******************************************\n";

   return 0;
}