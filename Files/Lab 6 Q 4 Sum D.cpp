#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int sum_D = 0, limit, term = 1, num = 2; // int num = 1; Initialization
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use while statement.
    while (num <= limit) { // While (Condition)
        sum_D += pow ((float) -1, num/2 + 1) * pow ((float) num, 3);
        if (term % 2 != 0 && num < limit - 1) {
            cout << num << "^3" << " - "; 
        }
        else if (term % 2 == 0 && num < limit - 1) {
            cout << num << "^3" << " + "; 
        }
        else if (num == limit || num == limit - 1) {
            cout << num << "^3";
        }
        num += 2;
        term++; // Iteration
    }

    cout << " = " << sum_D;
    return 0;
}


// While loop Diagram
/*
    Initialization;
    while (Condition) {
        --------------------
            Some Codes;
        --------------------
        Iteration;
    }
*/