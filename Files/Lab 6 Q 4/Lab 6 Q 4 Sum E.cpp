#include <iostream>
using namespace std;
int main () {
    int sum_E = 0, fact_result = 1, limit;
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use for statement.
    for (int num = 1; num <= limit; num++) { // for (Initialization; Condition; Iteration)

        // Nested loop is used to to repeat the loop.
        for (int factorial = 1; factorial <= num; factorial++) { // for (Initialization; Condition; Iteration)
            fact_result *= factorial;
        }

        sum_E += fact_result;
        if (num == limit) {
            cout << num << "!";
        }
        else {
            cout << num << "!" << " + ";
        }
        fact_result = 1;
    }

    cout << " = " << sum_E;
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