#include <iostream>
using namespace std;
int main() {
	int temp;
	cout << "enter the Temp: ";
	cin >> temp;
    if (temp < 0) {
		cout << "Freezing weather";
	}
	else if (temp < 10 && temp >= 0) {
		cout << "Very cold weather";
	}
	else if (temp < 20 && temp >= 10) {
		cout << "Cold weather";
	}
	else if (temp < 30 && temp >= 20) {
		cout << "Normal weather";
	}
	else if (temp < 40 && temp >= 30) {
		cout << "Its hot";
	}
	else {
		cout << "Very hot";
	}
	return 0;
}



/*
&& = and
|| = or
*/