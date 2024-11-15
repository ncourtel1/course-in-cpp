#include <iostream>

int main() {

   /*
      DYNAMIC MEMORY:
      - Dynamic memory refers to memory allocated during runtime (when the program is running) instead of compile time.
      - This is achieved using the `new` operator, which allocates memory in the **heap** instead of the **stack**.
      - Dynamic memory is especially useful when:
         - We don't know in advance how much memory will be needed (e.g., user input).
         - We need to handle flexible or large data structures.
      - Memory allocated dynamically must be freed manually using the `delete` or `delete[]` operators to avoid memory leaks.
   */

   // Declare a pointer for an integer and initialize it to NULL (to avoid pointing to garbage memory)
   int *pNum = NULL;

   // Allocate memory dynamically for one integer using `new`
   pNum = new int;

   // Assign a value to the dynamically allocated memory
   *pNum = 51;

   std::cout << "address: " << pNum << '\n';
   std::cout << "value: " << *pNum << '\n';

   /*
      Explanation of above:
      - `new int` allocates memory for a single integer on the heap and returns its address, which is stored in `pNum`.
      - `*pNum` dereferences the pointer to access the value stored at that address.
      - This approach is useful when the size of required memory is not known in advance.
   */

   // Declare a pointer for a dynamic array of characters (grades)
   char *pGrades = NULL;
   int size; 

   std::cout << "How many grades to enter in?: ";
   std::cin >> size;

   // Dynamically allocate memory for the array of characters based on user input
   pGrades = new char[size];

   for (int i = 0; i < size; i++){
      std::cout << "Enter grade #" << i + 1 << ": ";
      std::cin >> pGrades[i];
   }

   for (int i = 0; i < size; i++){
      std::cout << (char)toupper(pGrades[i]) << " ";
   }
   std::cout << '\n';

   /*
      Explanation of above:
      - The size of the array is determined dynamically based on user input.
      - Memory for the array is allocated on the heap using `new char[size]`.
      - The loop populates the array by taking input from the user.
      - In the second loop, each grade is printed in uppercase using `toupper` from `<cctype>`.
      - Dynamic arrays are useful for handling situations where the size of the array is not fixed.
   */

   // Free the dynamically allocated memory for the grades array to avoid memory leaks
   delete[] pGrades;

   /*
      Explanation of delete[]:
      - `delete[]` is used to free memory allocated for arrays on the heap.
      - Failing to free memory can lead to memory leaks, where the program consumes more memory over time and slows down or crashes.
      - Always pair `new` with `delete` and `new[]` with `delete[]`.
   */

   return 0;
}