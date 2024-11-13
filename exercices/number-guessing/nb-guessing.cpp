#include <iostream>

using std::cout, std::cin;

int main() {

   srand(time(NULL));
   int numberToGuess = (rand() % 100) + 1;
   int myGuess;
   int numberOfGuess = 7;
   int currentNumberOfGuess = 0;

   cout << "\n****** WELCOME TO GUESS THE NUMBER ******\n\n";
   cout << "You have 10 try to guess the number between 1 and 100\n";
   
   do {
      cout << "Guess " << currentNumberOfGuess + 1 << "/7\n";
      cout << "Your guess: ";
      cin >> myGuess;

      if (myGuess < numberToGuess){
         cout << "It's greater!\n";
         currentNumberOfGuess++;
      } else if (myGuess > numberToGuess){
         cout << "It's lower!\n";
         currentNumberOfGuess++;
      } else if (myGuess == numberToGuess){
         cout << "CONGRATULATION YOU FIND THE NUMBER!!!\n";
         return 0;
      } else {
         cout << "Enter a valid number (1-100)";
      }

   }while (currentNumberOfGuess < numberOfGuess);
   
   cout << "Sorry, you've run out of tries. The number was " << numberToGuess << ".\n";

   return 0;
}