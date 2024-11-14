#include <iostream>

using std::cout;

int main() {

   int array[][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10}};

   int rows = sizeof(array) / sizeof(array[0]); // = 2
   int columns = sizeof(array[0]) / sizeof(array[0][0]); // = 5

   for (int i = 0; i < rows; i++){
      for (int j = 0; j < columns; j++){
         cout << array[i][j] << " ";
      }
   }

   return 0;
}