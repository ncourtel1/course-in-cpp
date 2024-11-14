#include <iostream>

using std::cout, std::string;

int main() {
   // memory address = a location in memory where data is stored
   // a memory address can be accessed with & (address-of operator)

   int age = 24;           
   string name = "Nattan";
   bool student = true;

   cout << &name << '\n';
   cout << &age << '\n';
   cout << &student << '\n';


   return 0;
}