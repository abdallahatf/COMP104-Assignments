#include<iostream>
using namespace std;
int main () {
    int start, end, result, mod0 = 0, primes = 0;
    
    do { // to keep the program running we can put it in do while loop.
        cout << "Input your Start (greater than 0): ";
        cin >> start;
        cout << "Input the End: ";
        cin >> end;
        for (int num = start; num <= end; num++) {
            for (int test = 2; test <= num; test++) {
                result = num % test;
                if (result == 0) {
                    mod0++;
                }
            }
            if (mod0 == 1) {
                primes++;
            }
            mod0 = 0;
        }
        cout << "num of prime numbers = " << primes << endl;
        primes = 0;
    } while (start <= end && start > 0);

    if (start <= 0) {
        cout << "ERROR: the start is not greater than 0";
    } 
    else if (start > end) {
        cout << "ERROR: the start is greater than end";
    }
    return 0;
}