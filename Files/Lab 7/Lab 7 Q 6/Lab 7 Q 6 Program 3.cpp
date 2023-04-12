#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int constant, limit;
    float sum = 0;
    cout << "Input the constant: ";
    cin >> constant;
    cout << "Input the num of terms: ";
    cin >> limit;
    if (constant >= 0) {
        for (int num = 1; num <= limit; num++) {
            sum += (float) num / sqrt((float) constant + (float) num);
            if (num == limit) {
                cout << "( " << num << " / " << "( " << constant << " + " << num << " )^1/2";
            }
            else {
                cout << "( " << num << " / " << "( " << constant << " + " << num << " )^1/2" << " + ";
            }
        }
        cout << " = " << sum;
    }
    else {
        cout << "constant must be greater than 0";
    }
     return 0;
} 