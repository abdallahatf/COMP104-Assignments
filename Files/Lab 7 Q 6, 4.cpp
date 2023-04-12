#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int constant, limit, num_minus = 0;
    float sum = 0;
    cout << "Input the constant: ";
    cin >> constant;
    cout << "Input the num of terms: ";
    cin >> limit;
    if (constant != 0 && limit > 0) {
        for (int num = 1; num <= limit; num++) {
            sum += (pow((float) -1, (float) num - (float) 1) * pow((float) num, (float) num)) / (float) constant;
            if (num == limit) {
                cout << "((-1^" << num << "-1" << " * " << num << "^" << num <<
                ") / ((" << num << " - " << num_minus << ") * " << constant << "))";
            }
            else {
                cout << "((-1^" << num << "-1" << " * " << num << "^" << num <<
                ") / ((" << num << " - " << num_minus << ") * " << constant << ")) + ";
            }
            num_minus++;
        }
        cout << " = " << sum;
    }
    else if (constant == 0) {
        cout << "ERROR: constant must be not equal 0";
    }
    else if (limit <= 0) {
        cout << "ERROR: num of terms must be greater than 0";
    }
    else if (limit == 0 && limit <= 0) {
        cout << "ERROR: constant must be not wqual 0 and num of terms must be greater than 0";
    }
    return 0;
}