#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int x, y, z, // A
		x2, y2, z2, // B
		x3, y3, z3; // C

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

	cout << "Podaj współrzędną x3: ";
	cin >> x3;
	cout << "Podaj współrzędną y3: ";
	cin >> y3;
	cout << "Podaj współrzędną z3: ";
	cin >> z3;

	double ab = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2) + pow(z2 - z, 2));
	double bc = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2) + pow(z2 - z3, 2));
	double ac = sqrt(pow(x - x3, 2) + pow(y - y3, 2) + pow(z - z3, 2));

	float p = 0.5 * (ab + bc + ac);

	float s = sqrt(p * (p - ab) * (p - bc) * (p - ac));

	cout << fixed;
	cout << setprecision(6);
	cout << s << endl;

	return 0;
}
