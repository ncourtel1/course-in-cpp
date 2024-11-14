#include <iostream>
#include <vector>

using std::cout, std::vector, std::fill, std::string;

int main(){

   // fill() = Fills a range of elements with a specified value
   //          fill(begin, end, value);

   int array[5];
   vector<string> array2(5);

   fill(array, array + 5, 7);
   fill(array2.begin(), array2.end(), "Hello");

   for (int num : array){
      cout << num;
   }
   cout << '\n';
   for (string elem : array2){
      cout << elem << ", ";
   }

   return 0;
}