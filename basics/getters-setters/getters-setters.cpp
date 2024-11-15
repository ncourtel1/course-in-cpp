#include <iostream>

class Stove{
   private:
      int temperature = 0;
   
   public:

   Stove(int temperature){
      setTemperature(temperature);
   }

   int getTemperature(){
      return temperature;
   }
   void setTemperature(int temperature){
      this->temperature = temperature;
   }
};

int main(){

   // Abstraction = hiding unecessary data from outside a class
   // getter = function that makes a private attribute READABLE
   // setter = function that makes a private attribute WRITABLE

   Stove stove(5);

   std::cout << stove.getTemperature() << '\n';
   
   stove.setTemperature(10);

   std::cout << stove.getTemperature() << '\n';

   return 0;
}