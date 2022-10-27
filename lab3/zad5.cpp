#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n;

	int number[20][20];
	for (int i = 0; i < n; i++) {

		cin >> number[i][0];

		for (int j = 1; j <= number[i][0]; j++)
			cin >> number[i][j];
		
	}

	cout << endl << "Wyjście: " << endl;
	int max, min;
	for (int i = 0; i < n; i++) {

		max = min = number[i][1];
		for (int j = 1; j <= number[i][0]; j++) {
			
			if (max < number[i][j])
				max = number[i][j];

			if (min > number[i][j])
				min = number[i][j];

		}
		
		cout << min << " " << max << endl;

	}

	return 0;
}
