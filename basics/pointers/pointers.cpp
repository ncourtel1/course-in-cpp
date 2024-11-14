#include <iostream>

int main() {

   std::string name = "Nollan";
   std::string *pNmae = &name;
   std::cout << *pNmae << '\n';

   int age = 20;
   int *pAge = &age;
   std::cout << *pAge << '\n';
   age = 25;
   std::cout << *pAge << '\n';

   std::string grades[] = {"A", "B", "F"};
   std::string *pGrades = grades;
   std::cout << grades << '\n';
   std::cout << pGrades << '\n';
   std::cout << *pGrades << '\n';

   return 0;
}