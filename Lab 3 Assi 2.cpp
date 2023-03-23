#include <iostream>
using namespace std;
int main() {
	int meal;
	cout << "which sandwich you would like to have: " << endl;
	cout << "1- Spicy Crispy Chicken Sandwich" << endl << "2- Big Mac" << endl << "3- Chicken McNuggets" << endl << endl << endl;
	cout << "Please enter your choice: ";
	cin >> meal;

	// To execute or ignore some codes dependent on whether given conditions is true or false, use if statement.
	if (meal == 1) {
		cout << "The price for Spicy Crispy Chicken Sandwich is LE97" << endl;
	}
	else if (meal == 2) {
		cout << "The price for Big Mac is LE80" << endl;
	}
	else if (meal == 3) {
		cout << "The price for Chicken McNuggets is LE51" << endl;
	}
	else {
		cout << "The number does not exist" << endl;
	}
	
	return 0;
}