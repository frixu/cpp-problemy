#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	float x, y, r,
		x2, y2, r2;

	cout << "Podaj współrzędną x: ";
	cin >> x;
	cout << "Podaj współrzędną y: ";
	cin >> y;
	cout << "Podaj liczbę r: ";
	cin >> r;

	cout << "Podaj współrzędną x2: ";
	cin >> x2;
	cout << "Podaj współrzędną y2: ";
	cin >> y2;
	cout << "Podaj liczbę r2: ";
	cin >> r2;

	double d = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));

	if ((d - (r2 + r)) <= 0) {
		cout << "T" << endl;
	} else {
		cout << "F" << endl;
	}

	cout << fixed;
	cout << setprecision(6);
	cout << d << endl;

	return 0;
}
