#define RESET   "\033[37m"
#define GREEN   "\033[32m"  
#define YELLOW  "\033[33m"
#include <iostream>
#include <cctype>

using std::cout, std::string, std::cin;

int NUMBER_OF_GUESS = 6;
int CURRENT_NUMBER_OF_GUESS = 0;
string CURRENT_GUESS;

int main() {

   string wordTest = "words";

   cout << "********** Welcome to Wordle! **********\n";

   do{
      while(CURRENT_GUESS.length() != 5){
         cout << "Guess the word: ";
         cin >> CURRENT_GUESS;
      }
      cout << "Guess " << CURRENT_NUMBER_OF_GUESS + 1 << "/" << NUMBER_OF_GUESS << '\n';
      cout << " ----------------------------- \n";
      cout << "|     |     |     |     |     |\n";
      for (int i = 0; i <= CURRENT_GUESS.length(); i++){
         if (CURRENT_GUESS[i] == wordTest[i]){
            cout << "|  ";
            cout << GREEN << (char)std::toupper(CURRENT_GUESS[i]) << RESET;
            cout << "  ";
         } else if (wordTest.find(CURRENT_GUESS[i]) != string::npos){
            cout << "|  ";
            cout << YELLOW << (char)std::toupper(CURRENT_GUESS[i]) << RESET;
            cout << "  ";
         } else{
            cout << "|  ";
            cout << (char)std::toupper(CURRENT_GUESS[i]);
            cout << "  ";
         }
      }
      cout << "\n";
      cout << "|     |     |     |     |     |\n";
      cout << " ----------------------------- \n";
      if (CURRENT_GUESS == wordTest){
         cout << "Congratulation you find the secret word!";
         return 0;
      }
      CURRENT_NUMBER_OF_GUESS++;
      CURRENT_GUESS = "";

   } while (CURRENT_NUMBER_OF_GUESS <= NUMBER_OF_GUESS);
   cout << "You didn't find the word...";
   return 0;
}