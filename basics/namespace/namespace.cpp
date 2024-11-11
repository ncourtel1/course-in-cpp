#include <iostream> // Include the iostream library for output using std::cout

// Define the 'first' namespace
namespace first {
   int x = 1; // Declare a variable 'x' with the value 1 inside the 'first' namespace
}

// Define the 'second' namespace
namespace second {
   int x = 2; // Declare a variable 'x' with the value 2 inside the 'second' namespace
}

int main() {
   /*
   A namespace is used to prevent naming conflicts in large projects.
   It allows entities (such as variables or functions) to have the same name 
   as long as they are in different namespaces.
   */

   int x = 0; // Declare a local variable 'x' with the value 0

   // Output the value of the local variable 'x' (expected output: 0)
   std::cout << x << '\n'; 

   // Access the 'x' variable inside the 'first' namespace
   // 'first::x' means "get the 'x' variable from the 'first' namespace"
   // The value of 'first::x' is 1, so this will output 1
   std::cout << first::x << '\n';

   // Access the 'x' variable inside the 'second' namespace
   // 'second::x' means "get the 'x' variable from the 'second' namespace"
   // The value of 'second::x' is 2, so this will output 2
   std::cout << second::x << '\n';

   return 0; // Indicate successful program termination
}