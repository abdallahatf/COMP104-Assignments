#include <iostream>
#include <math.h>
using namespace std;
int main () {
    long long num;
    float sum = 0;
    cout << "Input the number: ";
    cin >> num;
    for (int terms = 0; terms <= num; terms++ ) {
        sum += 4 * (pow(-1.0, (float) terms) / ((2 * terms) + 1));
    }
    cout << "Pi = " << sum;
    return 0;
}