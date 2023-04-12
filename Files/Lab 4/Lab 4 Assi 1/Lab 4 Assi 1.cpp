#include <iostream>
using namespace std;

// To define new data type, use enum.
enum game { rock = 1, paper, scissors }; // Set first value = 1 if you want to avoid starting from scratch -> "0, 1, 2,..."

int main() {
	int hand1, hand2;
	game hnd1, hnd2;
	cout << "1- Rock" << endl << "2- Paper" << endl << "3- Scissors" << endl << endl;
	cout << "1st hand: ";
	cin >> hand1;
	cout << endl << "2nd hand: ";
	cin >> hand2;
	hnd1 = (game)hand1;
	hnd2 = (game)hand2;
	if (hand1 == rock) {
		if (hand2 == rock)
			cout << "Draw";
		else if (hand2 == paper)
			cout << "2nd hand is winner";
		else if (hand2 == scissors)
			cout << "1st hand is winner";
		else
			cout << "ERROR: there are a wrong value";
	}
	else if (hand1 == paper) {
		if (hand2 == rock)
			cout << "1st hand is winner";
		else if (hand2 == paper)
			cout << "Draw";
		else if (hand2 == scissors)
			cout << "2nd hand is winner";
		else
			cout << "ERROR: there are a wrong value";
	}
	else if (hand1 == scissors) {
		if (hand2 == rock)
			cout << "2nd hand is winner";
		else if (hand2 == paper)
			cout << "1st hand is winner";
		else if (hand2 == scissors)
			cout << "Draw";
		else
			cout << "ERROR: there are a wrong value";
	}
	else {
		cout << "ERROR: there are a wrong value";
	}
	return 0;
}