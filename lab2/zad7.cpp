#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	
	int x, y, z,
		x2, y2, z2;

	cout << "Podaj współrzędną x: ";
	cin >> x;
	cout << "Podaj współrzędną y: ";
	cin >> y;
	cout << "Podaj współrzędną z: ";
	cin >> z;

	cout << "Podaj współrzędną x2: ";
	cin >> x2;
	cout << "Podaj współrzędną y2: ";
	cin >> y2;
	cout << "Podaj współrzędną z2: ";
	cin >> z2;

	double d = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2) + pow(z2 - z, 2));

	cout << fixed;
	cout << setprecision(6);
	cout << d << endl;

	return 0;
}
