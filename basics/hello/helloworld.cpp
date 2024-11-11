#include <iostream>  // Includes the iostream library for input and output operations

int main() {
    // Outputs "I like peanut butter!" to the console
    // std::cout is used to send data to the console output
    // std::endl creates a new line and also flushes the buffer,
    // meaning it forces any stored data to display immediately on the console
    std::cout << "I like peanut butter!" << std::endl;

    /* Outputs "There is a lot of protein in it" to the console
     Here, "\n" is used to create a new line, but unlike std::endl,
     it does not flush the buffer. The buffer may wait until more data is added,
     or until it is full, before it actually displays on the console. */
    std::cout << "There is a lot of protein in it\n";

    // Returns 0 to indicate the program executed successfully
    return 0;
}