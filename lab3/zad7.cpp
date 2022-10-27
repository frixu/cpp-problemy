#include <iostream>
using namespace std;

int sigma(int value);

int main() {

	int number[7];

	for (int i = 0; i < 7; i++)
		cin >> number[i];
	
	cout << endl << "Wyjście: " << endl;
	for (int i = 0; i < 7; i++) {
		cout << sigma(number[i]) << " ";

		if (sigma(number[i]) == number[i] * 2)
			cout << "P";

		cout << endl;
	}

	return 0;
}

int sigma(int value) {

	int sigmaSum = 0;
	for (int i = 1; i <= value; i++) {
		if (value % i == 0)
			sigmaSum += i;
	}

	return sigmaSum;

}
