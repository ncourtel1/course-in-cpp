#include <iostream>

using std::string, std::cout, std::cin;

int main() {

   string name;

   cout << "Enter your name: ";
   std::getline(cin, name);

   if (name.length() > 12){
      cout << "Your name can't be over 12 charaters\n";
   } else if (name.empty()) {
      cout << "You didn't enter your name\n";
   } else {
      cout << "Welcome " << name << '\n';
   }

   cout << name.append("@gmail.com\n"); // append string at the end
   cout << name.at(3) << '\n'; // check character at index
   cout << name.insert(2, "8"); // insert new character at index
   cout << name.find("g") << '\n'; // find first index of chracter
   cout << name.erase(0, 3); // erase index from start to end, end exclude


   return 0;
}