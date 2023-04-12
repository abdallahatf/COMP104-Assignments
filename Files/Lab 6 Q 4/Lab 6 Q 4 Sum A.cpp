#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int sum_A = 0, limit, num = 1; // int num = 1; Initialization
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use while statement.
    while (num <= limit) { // While (Condition)
        sum_A += pow ((float) num, 2); // In Visual Studio 2010, the pow must have at least one float number.
        if (num == limit) {
            cout << num << "^2";
        }
        else {
            cout << num << "^2" << " + ";
        }
        num++; // Iteration
    }

    cout << " = " << sum_A;
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