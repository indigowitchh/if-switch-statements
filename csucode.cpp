#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	cout << "Two numbers please:" << endl;
	cin >> x;
	cin >> y;
	cout << "Division of" << x << "by" << y << ":" << x / y << endl;
	if (y == 0)
		cout<< "nope!" << endl;
	if (y == 13 || x == 13)
		cout << "Bad luck" << endl;
	if (x % 2 == 1)
		cout << "Odd:" << x << endl;
	if (y % 2 == 1)
		cout << "Odd:" << y << endl;

}
