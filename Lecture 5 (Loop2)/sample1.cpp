#include <iostream>

using namespace std;

int main() {
	/*
	1 2  3  4  5 
	2 4  6  8  10
	3 6  9  12 15
	4 8  12 16 20
	5 10 15 20 25
	*/

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { // row
		for (int j = 1; j <= n; j++) { // col
			cout << i * j << '\t';
		}
		cout << '\n';
	}

	// i = 1, j = 1, 2, 3, 4, 5
	// i = 2, j = 1, 2, 3, 4, 5
	// i = 3, j = 1, 2, 3, 4, 5
	// i = 4, j = 1, 2, 3, 4, 5
	// i = 5, j = 1, 2, 3, 4, 5

	return 0;
}