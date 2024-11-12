#include <iostream>

using std::cout, std::cin, std::string;

int main() {

   int age;
   string license;

   cout << "Enter your age: ";
   cin >> age;

   if (age >= 18)
   {
      cout << "Do you have a driver license?\nYes or No: ";
      cin >> license;

      if (license == "Yes" || license == "yes" || license == "y" || license == "Y"){
         cout << "Congratulation";
         
      } else{
         cout << "Shame on you!";
      }
   } else {
      cout << "You're still a baby";
   }
   


   return 0;
}