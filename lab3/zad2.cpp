#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	long long a, n, k;

	cout << "Podaj a, n, k: " << endl;
	cin >> a >> n >> k;

	long long result =
		fmod(pow(a, n), k);
	cout << result << endl;

	return 0;
}
