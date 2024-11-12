#include <iostream>

using std::cout;

int main(){
   for (int i = 0; i <= 7; i++){
      for (int j = i+1; j <= 8; j++){
         for (int k = j+1; k <= 9; k++){
            if (i == 7 && j == 8 && k == 9){
               cout << i << j << k << '\n';
               return 0;
            }
            cout << i << j << k << ", ";
         }
      }
   }
   return 0;
}