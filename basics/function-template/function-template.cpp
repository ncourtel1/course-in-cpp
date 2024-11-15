#include <iostream>

// Template declaration and definition
// This updated version of the template uses two types, T and U
// T and U can be different data types, making the function even more flexible
// The `auto` keyword is used to deduce the return type automatically based on the inputs
template<typename T, typename U> 
auto max(T x, U y) { 
    // The ternary operator compares x and y
    // Returns x if x is greater than y, otherwise returns y
    // This now works even if T and U are of different types (e.g., int and double)
    return (x > y ? x : y); 
}

int main() {
    // Call the template function with integers
    // The compiler infers T = int and U = int
    std::cout << max(6, 2) << '\n'; // Outputs: 6

    // Call the template function with floating-point numbers
    // The compiler infers T = double and U = double
    std::cout << max(3.5, 4.2) << '\n'; // Outputs: 4.2

    // Call the template function with characters
    // The compiler infers T = char and U = char
    // Characters are compared based on their ASCII values ('Z' = 90, 'A' = 65)
    std::cout << max('A', 'Z') << '\n'; // Outputs: Z

    // Call the template function with different types
    // The compiler infers T = double and U = int
    // The function works seamlessly due to type compatibility in the comparison
    std::cout << max(5.2, 3) << '\n'; // Outputs: 5.2

    return 0;
}