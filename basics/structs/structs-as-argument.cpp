#include <iostream>

// Define a structure to group car-related data
// The `Car` struct contains four fields:
// - `model` (std::string): the model of the car (e.g., "Mustang")
// - `km` (int): the car's mileage (e.g., 50000 kilometers)
// - `occasion` (bool): whether the car is second-hand (default = true)
// - `color` (std::string): the car's color (initially uninitialized)
struct Car { 
   std::string model;   
   int km;              
   bool occasion = true;
   std::string color;  
};

void printCar(Car &car); 
void paintcar(Car &car); 

int main() {
   // Create two instances of the Car struct
   Car car1; 
   Car car2;

   // Initialize `car1` with specific values
   car1.model = "Mustang"; // Set the model of the first car
   car1.km = 50000;        // Set the mileage of the first car

   // Initialize `car2` with specific values
   car2.model = "Corvette"; // Set the model of the second car
   car2.km = 0;             // Set the mileage of the second car (new car)
   car2.occasion = false;   // Set occasion to false (indicates it's a new car)
   // Display the details of each car using the `printCar` function
   printCar(car1); // Outputs: Mustang, 50000, 1 (true as integer)
   printCar(car2); // Outputs: Corvette, 0, 0 (false as integer)

   // Paint `car1` using the `paintcar` function
   paintcar(car1); // Sets `car1.color` to "red"

   // Output the color of `car1` after painting
   std::cout << car1.color; // Outputs: red

   return 0;
}

// Function to print the details of a car
// - Takes a reference to a `Car` object as a parameter to avoid copying
// - Prints the model, mileage, and occasion (1 = true, 0 = false)
void printCar(Car &car) {
   std::cout << car.model << '\n';
   std::cout << car.km << '\n';   
   std::cout << car.occasion << '\n';
}

// Function to "paint" a car
// - Sets the `color` field of the car to "red"
// - Takes a reference to a `Car` object to modify the original car
void paintcar(Car &car) {
   car.color = "red"; 
}