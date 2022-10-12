#include <iostream>
using namespace std;

int main() {

	// definicja trzech zmiennych, ktore beda przechowywac liczby wprowadzone przez uzytkownika
	int l1, l2, l3;

	// pobieranie liczb od uzytkownika
	cout << "Podaj pierwszą liczbę: ";
	cin >> l1;
	cout << "Podaj drugą liczbę: ";
	cin >> l2;
	cout << "Podaj trzecią liczbę: ";
	cin >> l3;

	int nums_unsorted[3] = {l1, l2, l3};
	int nums_sorted[3] = {0, 0, 0};

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {

		if (nums_unsorted[j] > nums_sorted[i]) {
			if (i <= 0 || nums_unsorted[j] < nums_sorted[i - 1]) {
				nums_sorted[i] = nums_unsorted[j];	
			} 		
		}

		}
	}

	for (int i = 0; i <= 2; i++) {
		cout << nums_sorted[i] << " ";
	}

	return 0;
}
