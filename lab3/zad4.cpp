#include <iostream>
using namespace std;

int main() {

	int m;
	cout << "Podaj liczbę danych testowych (m): " << endl;
	cin >> m;

	int number[20];

	for (int i = 0; i < m; i++) {
		cin >> number[i];
	}

	int iterator;
	for (int i = 0; i < m; i++) {
		
		iterator = 0;
		while (number[i] != 1) {

			if (number[i] % 2 != 0) {

				number[i] *= 3;
				number[i] += 1;

			} else {

				number[i] /= 2;

			}

			iterator++;

		}

		cout << iterator << endl;

	}


	return 0;
}
