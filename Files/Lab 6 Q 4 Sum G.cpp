#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int limit, constant, fact_result = 1, factorial = 1, num = 0;
    float sum_G;
    cout << "Input the limit num you want: ";
    cin >> limit;
    cout << "Input the constant you want: ";
    cin >> constant;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use while statement.
    while (num <= limit) { // while (Condition)
        
        // Nested loop is used to to repeat the loop
        while (factorial <= num) { // while (Condition)
            fact_result *= factorial;
            factorial++; // Iteration
        }

        sum_G += pow ((float) constant, num) / fact_result;
        if (num == limit) {
            cout << "(" << constant << "^" << num << " / " << num << "!)";
        }
        else {
            cout << "(" << constant << "^" << num << " / " << num << "!) + ";
        }
        num++; // Iteration
    }

    cout << " = " << sum_G;
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