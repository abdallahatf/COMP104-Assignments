#include <iostream>
using namespace std;
int main () {
    int start, end, sum = 0, num, even_nums = 0;
    float average;
    cout << "Input your Start: ";
    cin >> start;
    cout << endl << "Input your End: ";
    cin >> end;
    num = start;
    if (num <= end) {
        while (num <= end) {
            if (num % 2 == 0) {
                sum += num;
                even_nums++;
                if (num == end || num == end - 1) {
                    cout << num;
                }
                else {
                    cout << num << " + ";
                }
            }
            num++;
        }
        cout << " = " << sum << endl;
        average = (float) sum / (float) even_nums;
        cout << sum << " / " << even_nums << " = " << average << endl;
    }
    else {
        cout << "ERROR: Start is greater than End";
    }
    return 0;
}