#include <iostream>
using namespace std;
int main() {

	// to store the input (integer) values in memory to be useable later in program. -- It is necessary --
	int num1, num2;

	// to input, use cin.
	cin >> num1 >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;   // Reminder after division -> "Modulus"
	return 0;
}