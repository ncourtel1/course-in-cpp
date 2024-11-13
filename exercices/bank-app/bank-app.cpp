#include <iostream>

using std::cout, std::cin;

int main() {

   double balance = 0;
   double deposite;
   double withdraw;
   int choice;

   cout << "Welcome to your BANK APP\n";

   do{
      cout << "What would you like to do?\n";
      cout << "1 - Check your balance\n";
      cout << "2 - Deposite\n";
      cout << "3 - Withdraw\n";
      cout << "4 - Quit\n";
      cout << "Your choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "*********************\n";
         cout << "** Your balance: " << balance << "$ **\n";
         cout << "*********************\n";
         break;
      case 2:
         cout << "How much would you like to deposite?: ";
         cin >> deposite;
         cout << "**************************\n";
         cout << "** Your new balance: " << balance + deposite << "$ **\n";
         cout << "**************************\n";
         balance += deposite;
         break;
      case 3:
         cout << "How much would you like to withdraw?: ";
         cin >> withdraw;
         if (balance - withdraw < 0){
            cout << "You can't withdraw: " << withdraw << "$\nYou don't have enough money on your account\n";
            break;
         }
         cout << "**************************\n";
         cout << "** Your new balance: " << balance - withdraw << "$ **\n";
         cout << "**************************\n";
         balance -= withdraw;
         break;
      case 4:
         cout << "Goodbye";
         return 0;
         break;
      default:
         cout << "Please enter a valid choice (1-4)\n";
         break;
      }
   } while(1);

   return 0;
}