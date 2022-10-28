#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int trojkat[3] = {a, b, c};
	int next = 0, prev = 0;

	string czy_trojkat;
	for (int i = 0; i <= 2; i++) {
		(i != 2) ? next = i + 1 : next = 0;
		(i != 0) ? prev = i - 1 : prev  = 2;
		if (trojkat[i] < trojkat[next] + trojkat[prev] &&
			trojkat[i] > trojkat[next] - trojkat[prev]) {

			if (pow(c, 2) < pow(a, 2) + pow(b, 2) &&
					pow(a, 2) < pow(c, 2) + pow(b, 2) &&
					pow(b, 2) < pow(a, 2) + pow(c, 2)) {
					
					czy_trojkat = "1";
			} else {
				czy_trojkat = "0";
			}
		} else {
			czy_trojkat = "ERROR";
		}
	}

	cout << czy_trojkat << endl;

	return 0;
}
