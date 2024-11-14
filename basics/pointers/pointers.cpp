#include <iostream>

int main() {

   std::string name = "Nollan";
   std::string *pName = &name; // Define a pointer 'pName' to store the address of 'name'
   std::cout << *pName << '\n'; // Dereference 'pName' to access the value of 'name' and print it

   int age = 20;
   int *pAge = &age; // Define a pointer 'pAge' to store the address of 'age'
   std::cout << *pAge << '\n'; // Dereference 'pAge' to access the value of 'age' and print it

   age = 25;
   std::cout << *pAge << '\n';


   char grades[] = {'A', 'B', 'F'};
   char *pGrades = grades; // Define a pointer 'pGrades' that points to the first element of the 'grades' array

   std::cout << grades << '\n'; // Print 'grades' as a C-style string, resulting in "ABF"
   std::cout << pGrades << '\n'; // Print 'pGrades' as a C-style string, resulting in "ABF"
   std::cout << *pGrades << '\n'; // Dereference 'pGrades' to print only the first character, 'A'

   return 0;
}