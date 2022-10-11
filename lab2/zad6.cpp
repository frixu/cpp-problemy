#include <iostream>
using namespace std;

int main() {

	// definicja trzech zmiennych, ktore beda przechowywac liczby wprowadzone przez uzytkownika
	int l1, l2, l3, l4;

	// pobieranie liczb od uzytkownika
	cout << "Podaj pierwszą liczbę: ";
	cin >> l1;
	cout << "Podaj drugą liczbę: ";
	cin >> l2;
	cout << "Podaj trzecią liczbę: ";
	cin >> l3;
	cout << "Podaj czwartą liczbę: ";
	cin >> l4;


	int nums[4] = {l1, l2, l3, l4};

	// przechodzimy przez całą tablicę liczb,
	// a gdy natrafimy na liczę wiekszą od poprzedniej,
	// to wtedy przypisujemy ją do zmiennej "highest"
	int highest = 0;
	for (int i = 0; i <= 3; i++) {
		if (nums[i] > highest) {
			highest = nums[i];
		}
	}

	cout << highest << endl;	

	return 0;
}
