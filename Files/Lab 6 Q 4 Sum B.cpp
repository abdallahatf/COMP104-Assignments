#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int sum_B = 0, limit;
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use for statement.
    for (int num = 1; num <= limit; num += 2) { // for (Initialization; Condition; Iteration)
        sum_B += pow ((float) num, 2); // In Visual Studio 2010, the pow must have at least one float number.
        if (num == limit || num == limit - 1) {
            cout << num << "^2";
        }
        else {
            cout << num << "^2" << " + ";
        }
    }

    cout << " = " << sum_B;
    return 0;
}


// For loop Diagram
/*
    for (Initialization; Condition; Iteration) {
        --------------------
            Some Codes;
        --------------------
    }
*/