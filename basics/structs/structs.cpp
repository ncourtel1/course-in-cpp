#include <iostream>

// Define a structure to group related data together
// The `struct student` represents a student with three attributes:
// 1. `name` (std::string): the name of the student
// 2. `enrolled` (bool): whether the student is enrolled or not (default-initialized to `false` if not explicitly set)
// 3. `age` (int): the age of the student
struct student {
   std::string name;   
   bool enrolled;      
   int age;            
};

int main() {
   // Create a variable of type `student`
   student student1;
   // Assign values to some fields of `student1`
   student1.name = "Nollan"; // Set the name of the student
   student1.age = 20;        // Set the age of the student

   // Create another `student` variable
   student student2;
   // Assign values to some fields of `student2`
   student2.age = 31;        // Set the age of the student
   student2.enrolled = true; // Set enrollment status to true

   // Create an array to store multiple `student` objects
   // This array can hold 5 students
   student students[5];
   // Assign `student1` to the first index of the array
   students[0] = student1;

   // Output the age of the first student in the array
   // Access the `age` field of `students[0]` using the dot operator
   std::cout << students[0].age << '\n'; // Outputs: 20

   // Attempt to output the name of the second student in the array
   // Since `students[1]` has not been initialized, its `name` field is empty
   std::cout << students[1].name << '\n'; // Outputs nothing (default-initialized to an empty string)

   return 0;
}