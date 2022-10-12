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

	float trojkat[3] = {a, b, c};
	int next = 0, prev = 0;

	bool czy_trojkat = false;
	for (int i = 0; i <= 2; i++) {
		(i != 2) ? next = i + 1 : next = 0;
		(i != 0) ? prev = i - 1 : prev  = 2;
		/* cout << i << ": " << next << " - " << prev << endl; */
		cout << "Miara boku: " << trojkat[i] << endl;
		cout << "Suma miar dwoch pozosatlych: " << trojkat[next] + trojkat[prev] << endl;
		if (trojkat[i] < trojkat[next] + trojkat[prev] &&
			trojkat[i] > trojkat[next] - trojkat[prev]) {

			czy_trojkat = true;

		} else {czy_trojkat = false;}
	}

	cout << czy_trojkat << endl;

	return 0;
}
