#include <iostream>

class Anmimal{
   public:
      bool alive = true;
    
   void eat() {
      std::cout << "This animal is eating\n";
   }
};

class Dog : public Anmimal{
   public:
   void bark(){
      std::cout << "Woof";
   }
};

class Cat : public Anmimal{
   public:
   
   void miaou(){
      std::cout << "Miaou";
   }
};

int main(){

   // inheritance = A class that can recieve attributes and methods from another class
   //               Children classes inherit from a Parent class
   //               Helps to reuse similar code found within multiple classes

   Dog dog;
   Cat cat;

   std::cout << dog.alive << '\n';
   dog.eat();
   dog.bark();
   std::cout << '\n';
   cat.miaou();

   return 0;
}