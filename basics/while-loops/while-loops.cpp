#include <iostream>

using std::cout, std::getline, std::cin, std::string;

int main() {
   // While loop = basic while condition
   string name;

   while (name.empty()) {
      cout << "Enter your name: ";
      getline(cin, name);
   }
   cout << "Hello " << name << '\n';


   // do while loop = do some block of code first, 
   //                 THEN repeat again if condition is true 

   int number;

   do { // Do the code first and check the condition after
      cout << "Enter a positive number: ";
      cin >> number;
   } while(number < 0);
   
   cout << "The number is: " << number;

   return 0;
}