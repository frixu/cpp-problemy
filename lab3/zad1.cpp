#include <iostream>
using namespace std;

int main() {
	int rows, cols;
	cout << "Podaj liczbę wierszy: ";
	cin >> rows;
	cout << "Podaj liczbę kolumn: ";
	cin >> cols;

	for (int i = 0; i < cols; i++) {
		for(int j = 0; j < rows; j++) {
			cout << "#";
		}
		cout << endl;
	}
	
	return 0;
}
