#include <iostream>

int main() {
   // std::cout << (insertion operator) - outputs data to the console
   // std::cin >> (extraction operator) - receives input from the user

   std::string name;
   int age;

   std::cout << "What's your age?: ";
   std::cin >> age;

   std::cout << "What's your full name?: ";
   // std::cin >> name;  // Can't take input with spaces, only reads up to the first space
   std::cin >> std::ws;  // std::ws discards any leading whitespace characters, including newlines
   std::getline(std::cin, name); // Allows input with spaces, such as full names

   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age << " years old.\n";   

   return 0;
}