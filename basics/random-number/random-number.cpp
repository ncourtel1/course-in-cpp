#include <iostream>

int main() {

   // Initializes the random number generator with the current time as the seed.
   // time(NULL) returns the number of seconds since January 1, 1970 (the "Unix epoch").
   // This ensures the random sequence is different every time the program runs.
   srand(time(NULL));

   // Generates a random number between 0 and 19 (rand() % 20).
   // Then adds 1 to shift the range to 1-20.
   int num = (rand() % 20) + 1;

   // Outputs the random number to the console.
   std::cout << num;

   return 0;
}