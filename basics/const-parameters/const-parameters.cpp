#include <iostream>

using std::cout, std::string;

// The parameters `name` and `age` are declared as `const`
// This means they are read-only inside the function and cannot be modified
// Benefits of using `const`:
// 1. Prevents accidental modification of parameters within the function.
// 2. Signals to other developers that these values won't change.
// 3. Allows the compiler to optimize code by knowing these values are immutable.
void printInfos(const string name, const int age);

int main() {
   string name = "Nattan";
   int age = 24;

   printInfos(name, age);

   return 0;
}

// Function definition
// `printInfos` takes two parameters by value, but they are marked as `const`
// The use of `const` here ensures the parameters cannot be changed inside the function
void printInfos(const string name, const int age){
   cout << "Name: " << name << '\n';
   cout << "Age: " << age << "\n";
}