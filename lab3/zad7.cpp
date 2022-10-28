#include <iostream>
using namespace std;

int sigma(int value);

int main() {

	int number[200];

	int n = 0;
	while (cin >> number[n]) n++;

	for (int i = 0; i < n; i++) {
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
