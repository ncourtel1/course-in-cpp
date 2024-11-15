#include <iostream>

// Define an enumerated type `Color`
// `enum` is a user-defined data type that assigns names to integer constants.
// By default, if no values are assigned, the first element is 0, and the rest increment sequentially.
// Example: `red = 0`, `blue = 1`, etc.
enum Color {
   red = 0,    // Explicitly assign `red` the value 0
   blue = 1,   // Explicitly assign `blue` the value 1
   yellow = 2, // Explicitly assign `yellow` the value 2
   green = 3,  // Explicitly assign `green` the value 3
   brown = 4   // Explicitly assign `brown` the value 4
};

// If no value is explicitly assigned to an enumerator,
// it automatically receives the next integer in sequence, starting from 0.

int main() {
   /*
      `enum` (short for "enumeration"):
      - Enums are great for creating a fixed set of potential options.
      - They make the code more readable and less error-prone because you can use meaningful names 
        (like `red`, `blue`, etc.) instead of raw numbers.

      Here, we define a variable `color` of type `Color` and initialize it with the value `red`.
   */
   Color color = red;

   // Use a `switch` statement to handle different values of the `color` variable.
   // Each `case` corresponds to a specific enumerator in the `Color` enum.
   switch (color) {
      case red: 
         std::cout << "It's red\n"; 
         break; 
      case blue: 
         std::cout << "It's blue\n";
         break;
      case yellow: 
         std::cout << "It's yellow\n";
         break;
      case green: 
         std::cout << "It's green\n";
         break;
      case brown: 
         std::cout << "It's brown\n";
         break;
   }

   return 0; 
}