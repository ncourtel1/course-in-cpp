#include <iostream>

int main() {
   // arithmetic operators return the result of a specific arithmetic operation (+ - * /)

   int students = 20;

   // students = students + 1;
   // students++;
   students += 1;
   std::cout << students << '\n';

   // students = students - 1;
   // students--;
   students -= 1;
   std::cout << students << '\n';

   //students = students * 2;
   students *= 2;
   std::cout << students << '\n';

   //students = students / 2;
   students /= 2;
   std::cout << students << '\n';

   int reminder = students % 3;
   std::cout << reminder << '\n';


   return 0;
}