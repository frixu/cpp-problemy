#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "Podaj ilość danych testowych (n): " << endl;
	cin >> n;

	if (n <= 2 || n >= 200) {
		cout << "blad";
		exit(1);
	}

	int number[200];

	// Pobieranie wartości od użytkownika n razy
	for (int i = 0; i < n; i++) 
		cin >> number[i];

	// [definicja zmiennych użytych w pętli]

	// Domyślnie przypisana jest tutaj jakakolwiek wartość z tablicy	
	int highest = number[0],
			rest = 0, // reszta z dzielenia
			evenSum = 0; // suma liczb parzystych

	for (int i = 0; i < n; i++) {
		cout << number[i];

		if (highest < number[i]) 
			highest = number[i];

		rest = number[i] % 2;
		if (rest == 0)
			evenSum += number[i]; 

		cout << " ";

	}

	cout << endl;
	cout << highest << endl << evenSum << endl;

	return 0;
}
