#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int sum_C = 0, limit, num = 1; // int num = 1; Initialization
    cout << "Input the limit num you want: ";
    cin >> limit;

    // To repeat some codes dependent on Initialization, Condition and Iteration, use while, for, do while statement.
    // I will use do while statement.
    do {
        sum_C += pow ((float) -1, num + 1) * pow ((float) num, 2);
        if (num < limit && num % 2 != 0) {
            cout << num << "^2" << " - ";
        } 
        else if (num < limit && num % 2 == 0) {
            cout << num << "^2" << " + ";
        }
        else if (num == limit) {
            cout << num << "^2";
        }
        num++; // Iteration
    } while (num <= limit); // while (Condition);

    cout << " = " << sum_C;
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