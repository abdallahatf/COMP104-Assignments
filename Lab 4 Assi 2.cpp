#include <iostream>
using namespace std;

// To define new data type, use enum.
enum week {sat = 1, sun, mon, tue, wed, thu, fri}; // Set first value = 1 if you want to avoid starting from scratch -> "0, 1, 2,..."

int main() {
	int numday;
	week nmd;
	cout << "The week starts on sturday" << endl << "enter the number of day: ";
	cin >> numday;
	nmd = (week)numday;

	// Switch is another type of Conditionial Statement.
	switch (numday) {  
		case sat :
			cout << "Saturday";
			break; // The break statement is used to terminate switch statement execution once we have achieved our result.
		case sun :
			cout << "Sunday";
			break;
		case mon :
			cout << "Monday";
			break;
		case tue :
			cout << "Tuesday";
			break;
		case wed :
			cout << "Wednesday";
			break;
		case thu :
			cout << "Thursday";
			break;
		case fri :
			cout << "Friday";
			break;
		default :
			cout << "Congratulations, you add a new day to the week !" << endl << endl << "Of course it's an ERROR";
	}

		return 0;
}



/* In Switch:
the program continues to the next labeled statement,
executing the statements until a break or the end of the statement is reached.*/