#include <iostream>

void walkIterative(int steps);
void walkRecursive(int steps);
int factorial(int num);

int main() {

   //walkIterative(10);
   //walkRecursive(10);

   std::cout << factorial(4);

   return 0;
}

void walkIterative(int steps){
   for (int i = 0; i < steps; i++){
      std::cout << "You take a step\n";
   }
}

void walkRecursive(int steps){
   if (steps > 0){
      std::cout << "You take a step\n";
      walkRecursive(steps-1);
   }
}

int factorial(int num){
   if (num > 1){
      return num * factorial(num-1);
   }
   return num;
}