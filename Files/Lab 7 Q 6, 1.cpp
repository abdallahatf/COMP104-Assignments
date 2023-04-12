#include <iostream>
using namespace std;
int main () {
    int float_nums, sum = 0;
    float average;
    cout << "Input the num of terms: ";
    cin >> float_nums;
    for (int num = 1; num <= float_nums; num++) {
        sum += num;
        if (num == float_nums) {
            cout << num;
        }
        else {
            cout << num << " + ";
        }
    }
    cout << " = " << sum << endl;
    average = (float) sum / (float) float_nums;
    cout << sum << " / " << float_nums << " = " << average << endl;
    return 0;
}