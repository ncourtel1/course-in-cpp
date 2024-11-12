#include <iostream>

using std::cout, std::cin;

int main() {
   // && = Check if 2 conditions are true
   // || = Check if at least one of two conditions is true
   // '! = reverse the logical state of its operand

   int temp;
   bool sunny = false;

   cout << "Enter a temperature: ";
   cin >> temp;

   if (temp >= 0 && temp <= 10){
      cout << "You are in Normandie\n";
   } else if (temp < -100 || temp > 100){
      cout << "You are not on the Earth Planet\n";
   }

   if (sunny){
      cout << "You are not in Normandie";
   } else if (!sunny){
      cout << "You are in Normandie";
   }

   return 0;
}