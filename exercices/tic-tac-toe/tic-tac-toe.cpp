#include <iostream>
#include <ctime>

using std::cout, std::string, std::cin;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
int checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {

   char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
   char player = 'X';
   char computer = 'O';
   int isWinner;

   cout << "Welcome to TIC TAC TOE game";

   do {
      drawBoard(spaces);
      playerMove(spaces, player);
      isWinner = checkWinner(spaces, player, computer);
      if (isWinner == 1){
         drawBoard(spaces);
         cout << "YOU WIN!!!";
         break;
      }
      if (checkTie(spaces)){
         cout << "It's a Tie!!!";
         break;
      }

      computerMove(spaces, computer);
      isWinner = checkWinner(spaces, player, computer);
      if (isWinner == -1){
         drawBoard(spaces);
         cout << "You lose...";
         break;
      }
      if (checkTie(spaces)){
         cout << "It's a Tie!!!";
         break;
      }

   } while(1);

   return 0;
}

void drawBoard(char *spaces){
   cout << '\n';
   cout << "     |     |     " << '\n';
   cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
   cout << "_____|_____|_____" << '\n';
   cout << "     |     |     " << '\n';
   cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
   cout << "_____|_____|_____" << '\n';
   cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerMove(char *spaces, char player){
   int choice;
   do{
      cout << "Where do you want to move ? (1-9): ";
      cin >> choice;

      if (spaces[choice-1] == ' '){
         spaces[choice-1] = player;
         break;
      } else if (spaces[choice-1] == 'X' || spaces[choice-1] == 'O') {
         cout << "You can't move here, the place is already occupied\n";
      } else {
         cout << "Enter a valid choice (1-9)\n";
      }
   } while(1);
}

void computerMove(char *spaces, char computer){
   srand(time(0));
   int choice;
   
   while(true){
      choice = rand() % 9;
      if (spaces[choice] == ' '){
         spaces[choice] = computer;
         break;
      }
   }
}

int checkWinner(char *spaces, char player, char computer){
   int winnerComb[][3] = {
      {0, 1, 2},
      {3, 4, 5},
      {6, 7, 8},
      {0, 3, 6},
      {1, 4, 7},
      {2, 5, 8}, 
      {0, 4, 8},
      {2, 4, 6}
   };
   int size = sizeof(winnerComb)/sizeof(winnerComb[0]);

   for (int i = 0; i < size; i++){
      if (spaces[winnerComb[i][0]] == player && spaces[winnerComb[i][1]] == player && spaces[winnerComb[i][2]] == player){
         return 1;
      } else if (spaces[winnerComb[i][0]] == computer && spaces[winnerComb[i][1]] == computer && spaces[winnerComb[i][2]] == computer){
         return -1;
      }
   }
   return 0;
}

bool checkTie(char *spaces){
   for (int i = 0; i < 9; i++){
      if (spaces[i] == ' '){
         return false;
      }
   }
   return true;
}