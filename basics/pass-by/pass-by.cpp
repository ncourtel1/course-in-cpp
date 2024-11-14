#include <iostream>

using std::cout, std::string;

// The swap function takes two string references as parameters
// By using references (&), we pass the actual variables directly
// rather than creating copies. This makes the function more efficient
// and allows it to modify the original variables in the calling function.
void swap(string &x, string &y);

int main() {
   
   string x = "Water";
   string y = "Orange juice";
   string temp; 

   cout << "Before any swap:\nX - " << x << "\nY - " << y << '\n';

   temp = x; 
   x = y;    
   y = temp; 
   
   // Print values after manual swap
   cout << "After swapping by VALUE:\nX - " << x << "\nY - " << y << '\n';

   // Swap the values of x and y again, this time using the swap function
   swap(x, y);

   // Print values after swapping using the function
   cout << "After swapping by REFERENCE:\nX - " << x << "\nY - " << y << '\n';

   return 0;
}

// swap function definition
// By taking the parameters x and y by reference (string &x, string &y),
// we directly modify the original variables passed in main().
// This avoids creating new copies and is more efficient.
void swap(string &x, string &y){
   string temp; 
   temp = x;    
   x = y;       
   y = temp;    
}