#include <iostream>
using namespace std;
int main() {

	// to store the input (float) values in memory to be useable later in program. -- It is necessary --
	float num1, num2;

	// to input, use cin.
	cin >> num1 >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	cout << num1 << " % " << num2 << " = " << (int) num1 % (int) num2 << endl;   // Reminder after division -> "Modulus"
	// In float, there is no reminder so that we can not use "Modulus". So that we can use (int) to convert value to integer again.

	return 0;
}