#include <iostream>
#include <cmath>
using namespace std;

int main() {

	// definicja trzech zmiennych, ktore beda przechowywac liczby wprowadzone przez uzytkownika
	float a, b, c;

	// pobieranie liczb od uzytkownika
	cout << "Podaj liczbę a: "; 
	cin >> a;
	cout << "Podaj liczbę b: ";
	cin >> b;
	cout << "Podaj liczbę c: ";
	cin >> c;

	float p = 0.5 * (a + b + c);
	float s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << s << endl;

	return 0;
}
