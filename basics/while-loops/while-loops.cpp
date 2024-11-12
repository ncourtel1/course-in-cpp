#include <iostream>

using std::cout, std::getline, std::cin, std::string;

int main() {

   string name;

   while (name.empty()) {
      cout << "Enter your name: ";
      getline(cin, name);
   }
   cout << "Hello " << name;

   return 0;
}