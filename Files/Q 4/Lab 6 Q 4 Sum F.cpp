#include <iostream>
using namespace std;
int main () {
    int fact_result = 1, limit, num = 1, factorial = 1; // int num = 1, int factorial = 1; Initialization
    float sum_F;
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use do while statement.
    do {

        // Nested loop is used to to repeat the loop
        do {
            fact_result *= factorial; 
            factorial++; // Iteration
        } while (factorial <= num); // while (Condition);
        
        sum_F += (float) (num + 1) / (float) fact_result;
        if (num == limit) {
            cout << "(" << num + 1 << " / " << num << "!)";
        }
        else {
            cout << "(" << num + 1 << " / " << num << "!) + ";
        }
        num++; // Iteration
    } while (num <= limit); // while (Condition);

    cout << " = " << sum_F;
    return 0;
}


// Do While loop Diagram
/*
    Initialization;
    do {
        --------------------
            Some Codes;
        --------------------
        Iteration;
    } while (Condition);
*/