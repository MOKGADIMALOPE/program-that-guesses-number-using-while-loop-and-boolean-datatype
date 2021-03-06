// program the guess number using while-loop and boolean datatype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	const int secretnumber = 33;
	int numberoftries;
	bool found;
	int number;

	found = false;
	numberoftries = 0;

	while ((numberoftries < 10) && (!found)) {
		cout << " Guess number between 1 and 100 " << endl;
		cin >> number;
		numberoftries++;

		if (number == secretnumber) {
			found = true;
		}

		if (found) {

			cout << "  Well done you got the number in " << numberoftries << " Guesses ";
		}

		else {
			cout << " Not  correct!! Please try again." << endl;
		}

	}
	return 0;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
