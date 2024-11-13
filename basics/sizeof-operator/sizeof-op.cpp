#include <iostream>
#include <vector>

using std::cout, std::string, std::vector;

int main() {
   // sizeof() determines the size in bytes of a :
   //          variable, data type, class, objects, etc.

   double d_num = 2.5;
   int i_num = 2;
   string name = "Nattan";
   char grade = 'C';
   vector<string> colors = {"Blue", "Red", "Black", "Green", "Yellow"};
   bool rich = false;
   char grades[] = {'A', 'C', 'F', 'D'};

   cout << sizeof(d_num) << " bytes\n";
   cout << sizeof(i_num) << " bytes\n";
   cout << sizeof(name) << " bytes\n";
   cout << sizeof(grade) << " bytes\n";
   cout << sizeof(colors) << " bytes\n";
   cout << sizeof(rich) << " bytes\n";
   cout << sizeof(grades)/sizeof(char) << " elements\n";
   

   return 0;
}