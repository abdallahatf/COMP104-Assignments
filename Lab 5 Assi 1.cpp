#include <iostream>
using namespace std;
int main() {
	long int num;
	cout << "input 6-digit Number: ";
	cin >> num;
	if (num > 99999 && num < 1000000) {
		cout << (num / 100000 % 10) << " + " << (num / 10000 % 10) << " + " << (num / 1000 % 10) << " + " << (num / 100 % 10)
			<< " + " << (num / 10 % 10) << " + " << (num / 1 % 10) << " = "
			<< (num / 1 % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000 % 10) + (num / 10000 % 10) + (num / 100000 % 10)
			<< endl;
	}
	else {
		cout << "The num. of digits is WRONG" << endl;
	}
	return 0;
}