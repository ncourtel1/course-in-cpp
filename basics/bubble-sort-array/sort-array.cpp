#include <iostream>

void sort(int array[], int size);

int main(){

   int numbers[] = {11, 4, 96, 61, 2, 25, 72, 41};
   int size = sizeof(numbers)/sizeof(numbers[0]);

   sort(numbers, size);

   for (int num : numbers){
      std::cout << num << ", ";
   }


   return 0;
}

void sort(int array[], int size) {
   int temp; // Temporary variable for swapping elements

   // Outer loop to control the number of passes through the array
   for (int i = 0; i < size - 1; i++) {

      // Inner loop to compare and swap adjacent elements
      for (int j = 0; j < size - 1 - i; j++) {
         // Check if the current element is greater than the next element
         if (array[j] > array[j + 1]) {
            // Swap elements if they are in the wrong order
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
         }
      }
      // After each pass, the largest element in the unsorted part of the array
      // "bubbles up" to its correct position at the end of the array
   }
}