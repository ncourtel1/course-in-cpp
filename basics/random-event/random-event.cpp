#include <iostream>
#include <ctime>

using std::cout;

int main() {

   srand(time(0));
   int randNum = (rand() % 5) + 1;

   switch (randNum){
      case 1:
         cout << "You win a t-shirt";
         break;
      case 2:
         cout << "You win a free lunch";
         break;
      case 3:
         cout << "You win a headphone";
         break;
      case 4:
         cout << "You win a TV";
         break;
      case 5:
         cout << "You win a car";
         break;
   }

   return 0;
}