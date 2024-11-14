#include <iostream>

/*
   Luhn algorithm :

   1.Double every second digit from right to left. If this “doubling” results in a two-digit number, subtract 9 from it get a single digit.
   
   2.Now add all single digit numbers from step 1.
   
   3.Add all digits in the odd places from right to left in the credit card number.
   
   4.Sum the results from steps 2 & 3.
   
   5.If the result from step 4 is divisible by 10, the card number is valid; otherwise, it is invalid.
   for example:
*/


int getDigit(const int number);  
int sumOddDigits(const std::string cardNumber);  
int sumEvenDigits(const std::string cardNumber);

int main() {
   std::string cardNumber;  // Variable to store the credit card number input by the user
   int result = 0;  // Variable to store the sum of the odd and even digits

   // Prompt the user to enter a credit card number
   std::cout << "Enter a credit card #: ";
   std::cin >> cardNumber;  // Store the input card number in the cardNumber variable

   // Sum the odd-positioned and even-positioned digits of the card number
   result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

   // Check if the result is divisible by 10 (valid card number check, likely implementing a Luhn algorithm validation)
   if (result % 10 == 0){
      std::cout << cardNumber << " is valid";  // If divisible by 10, the card number is considered valid
   } else {
      std::cout << cardNumber << " is not valid";  // If not divisible by 10, the card number is invalid
   }

   return 0;  // End of the program
}

// Helper function to get the sum of the last two digits of a number
// The number parameter is expected to be a single digit or a two-digit number
int getDigit(const int number){
   // The function extracts the sum of the last two digits of the given number
   // `number % 10` gives the last digit of the number
   // `(number / 10 % 10)` gives the second-to-last digit of the number
   return number % 10 + (number / 10 % 10);  // Returns the sum of those two digits
}

// Function to sum the odd-positioned digits (starting from the right) in the card number
// This is for digits in positions 1, 3, 5, etc. (odd positions when counting from the right)
int sumOddDigits(const std::string cardNumber){
   int sum = 0;  // Initialize the sum of the odd-positioned digits

   // Loop through the card number from right to left, considering odd-positioned digits
   // We start from the last character and decrement by 2 to get every second digit (odd positions)
   for (int i = cardNumber.size() - 1; i >= 0; i-=2){
      sum += getDigit(cardNumber[i] - '0');  // Convert character to integer and add to sum
   }
   return sum;  // Return the sum of the odd-positioned digits
}

// Function to sum the even-positioned digits (starting from the right) in the card number
// This is for digits in positions 2, 4, 6, etc. (even positions when counting from the right)
int sumEvenDigits(const std::string cardNumber){
   int sum = 0;  // Initialize the sum of the even-positioned digits

   // Loop through the card number from right to left, considering even-positioned digits
   // We start from the second-to-last character and decrement by 2 to get every second digit (even positions)
   for (int i = cardNumber.size() - 2; i >= 0; i-=2){
      // Multiply each digit by 2 as per the Luhn algorithm and sum the result
      sum += getDigit((cardNumber[i] - '0') * 2);  // Convert character to integer, multiply by 2, and add to sum
   }
   return sum;  // Return the sum of the even-positioned digits
}