#include <iostream>
using namespace std;
int main () {
    int sum = 0, valid_nums = 0, counter = 1, nums, divisible, num;
    float average = 0;
    cout << "Input the divisible num: ";
    cin >> divisible;
    cout << "Input the number of nums you will add them: ";
    cin >> num;
    while (counter <= num) {
        cout << "Input the nums: ";
        cin >> nums;
        
        if (nums % divisible == 0) {
            sum += nums;
            valid_nums++;
        }
        counter++;
    }
    cout << "Sum = " << sum << endl;
    average = (float) sum / (float) valid_nums;
    cout << "Average = " << average;
    return 0;
}