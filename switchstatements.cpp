#include <iostream>
using namespace std;

int main() {
	char choice;
	cout << "Enter song choice:" << endl;
	cout << "(c)hilds play, (t)op, (n)yan cat, (j)ust wanna rock, or (q)uit" << endl << endl;
	cin >> choice;

	switch (choice) {
	case 'c':
		cout << "5k, no, 10k, what I make today?" << endl;
		break;
	case 't':
		cout << "first i drop my top ay, then i swerve my coup, ay" << endl;
		break;
	case 'n':
		cout << "Nyan nyan nyan nyan nyan nyan nyan nyan nyan" << endl;
		break;
	case 'j':
		cout << "Stand on my money, don't know my size" << endl;
		break;
	case 'q':
		cout << "Good bye!" << endl;
		break;
	default:
		cout << "Sorry, not an option" << endl;

	}
}
