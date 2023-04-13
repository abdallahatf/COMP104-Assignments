// Note: the result of this program is a "table" of multiplication, so resize your window if the table does not appear well.

#include<iostream>
using namespace std;
int main () {
   int constant = 0;
   do {
      int result = 0;
      for (int multi_num = 0; multi_num <= 10; multi_num++) {
         result = multi_num * constant;
         cout << multi_num << " * " << constant << " = " << result;
         if (multi_num == 10) {
            if (result < 10) {
               cout << "   ";
            }
            else if (result >= 10 && result < 100) {
               cout << "  "; 
            } 
            cout << "|" << " " << endl;
         }
         else { 
            if (constant < 10 && result < 10) {
               cout << "  ";
            }
            else if ((constant < 10 && result >= 10 && result < 100) || (constant == 10 && result < 10)) {
               cout << " "; 
            }
            cout << "|" << " ";
         }
      }
      constant++;
   } while (constant <= 10);
   return 0;
}