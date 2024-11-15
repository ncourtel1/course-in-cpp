#include <iostream>

class Pizza{
   public:
      // Member variables to store the toppings of the pizza
      std::string topping1;
      std::string topping2;
   
   // Default constructor - initializes a pizza object without toppings
   Pizza(){}
   
   // Constructor that accepts one topping and sets it to topping1
   Pizza(std::string topping1){
      this->topping1 = topping1;
   }
   
   // Constructor that accepts two toppings and sets them to topping1 and topping2
   Pizza(std::string topping1, std::string topping2){
      this->topping1 = topping1;
      this->topping2 = topping2;
   }
};

int main(){

   // overloaded constructors = multiple constructors with the same name but different parameters
   //                           allows for varying arguments when instantiating an object

   Pizza pizza1("pepperoni");                
   Pizza pizza2("mushrooms", "peppers");     
   Pizza pizza3;                             

   std::cout << pizza1.topping1 << '\n';                      // Outputs the topping of pizza1 ("pepperoni")
   std::cout << pizza2.topping1 << ", " << pizza2.topping2 << '\n';  // Outputs the toppings of pizza2 ("mushrooms, peppers")

   return 0;
}