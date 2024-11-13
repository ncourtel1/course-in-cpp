#include <iostream>
#include <vector>

using std::cout, std::vector, std::string;

int main() {

   // The foreach loop offers simple, read-only traversal of elements from start to finish without access to indices.

   vector<int> nums = {9, 2, 19, 32};
   string name = "Nattan";

   for (int num : nums){
      cout << num << '\n';
   }
   for (char c : name){
      cout << c << '\n';
   }

   return 0;
}