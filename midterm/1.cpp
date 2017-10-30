#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 1) {
		cout << "NO";
		return 0;
	}
	bool isPrime = true;
	// 24 - (1, 24), (2, 12), (3, 8), (4, 6)
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}

	if (isPrime)
		cout << "YES";
	else
		cout << "NO";	
	// int k = 0;


	// for (int i = 1; i <= n; i++) {
	// 	if (n % i == 0) 
	// 		k++;
	// }

	// if (k == 2)
	// 	cout << "YES";
	// else
	// 	cout << "NO";
	return 0;
}