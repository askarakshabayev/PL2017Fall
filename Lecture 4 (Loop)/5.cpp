// n
// yes - prime, no - not prime

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	bool isPrime = true; // 7

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}

	if (isPrime == true) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}