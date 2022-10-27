#include <iostream>
using namespace std;

int main() {
 
	int n,
		x, y,
		xs, xy, s;
	
	cout << "Podaj liczbę danych testowych: ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		xs, s = 0;
		cin >> x >> y;

		xs = xy = x * y;

		while (xs != 0) {
		  s += xs % 10;
		  xs = xs / 10;
		}

		cout << xy << " " << s << endl;

	}

	return 0;
}
