#include <iostream>

// Define the `Student` class
class Student {
   public:
      // Public attributes of the `Student` class
      std::string name; 
      int age;          
      char grade;       

      // Constructor for the `Student` class
      // It initializes the attributes `name`, `age`, and `grade`
      // when an object of the `Student` class is created.
      Student(std::string nameC, int ageC, char gradeC) {
         name = nameC;    // Assign the parameter `nameC` to the class attribute `name`
         age = ageC;      // Assign the parameter `ageC` to the class attribute `age`
         grade = gradeC;  // Assign the parameter `gradeC` to the class attribute `grade`
      }
};

// Define the `Car` class
class Car {
   public:
      // Public attributes of the `Car` class
      std::string model;  
      int years;          
      bool occasion;     

      // Constructor for the `Car` class
      // It initializes the attributes `model`, `years`, and `occasion`
      // when an object of the `Car` class is created.
      Car(std::string modelC, int yearsC, bool occasionC) {
         model = modelC;       // Assign the parameter `modelC` to the class attribute `model`
         years = yearsC;       // Assign the parameter `yearsC` to the class attribute `years`
         occasion = occasionC; // Assign the parameter `occasionC` to the class attribute `occasion`
      }

      void Move() {
         std::cout << "Your car moves\n";
      }
};

int main() {
   /*
      Constructors:
      - A constructor is a special method that is automatically called
        when an object is instantiated.
      - Constructors are useful for initializing an object's attributes
        with specific values passed as arguments.
   */

   // Create a `Student` object and initialize its attributes using the constructor
   Student student1("Bob", 31, 'B');

   // Print the attributes of the `student1` object
   std::cout << student1.name << '\n';  // Outputs: Bob
   std::cout << student1.age << '\n';   // Outputs: 31
   std::cout << student1.grade << '\n'; // Outputs: B

   // Create a `Car` object and initialize its attributes using the constructor
   Car car1("Audi", 2019, false);

   // Print the attributes of the `car1` object
   std::cout << car1.model << '\n';   // Outputs: Audi
   std::cout << car1.years << '\n';   // Outputs: 2019
   std::cout << car1.occasion << '\n'; // Outputs: 0 (false in boolean context)

   // Call the `Move` function to simulate the car moving
   car1.Move(); // Outputs: Your car moves

   return 0; 
}