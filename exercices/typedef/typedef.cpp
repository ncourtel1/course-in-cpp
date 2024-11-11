#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;   exemple of usefull case
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

// Always use 'using' keyword over 'typedef' to define an alias

int main() {

   /*
   typedef = reserved keyword used to create an additional name (alias) for another data type.
      New identifier for an existing type helps with readibility and reduces typos.
      Use when there is a clear benefit.
      Replaced with 'using' (work better with templates)
   */

   text_t name = "Nattan"; // Declare a variable 'name' of type 'text_t' (which is 'std::string') and initialize it with "Nattan"
   number_t age = 24; // Declare a variable 'age' of type 'number_t' (which is 'int') and initialize it with 24

   std::cout << "My name is " << name << " and i'm " << age << " years old" << '\n';

   return 0;
}