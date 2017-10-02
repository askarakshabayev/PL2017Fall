#include <iostream>

using namespace std;

int main() {
	int a[100][100];
	int x[100];


	// 1 1 1 1 1 1
	// 2 2 2 2 2 2
	// 3 3 3 3 3 3
	// 4 4 4 4 4 4
	// 5 5 5 5 5 5
	// n n n n n n
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	// 7 7 7 7 7 7
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	// 7 7 7 7 7 7
	// 2 2 2 2 2 2
	// 7 7 7 7 7 7
	// 4 4 4 4 4 4
	// 7 7 7 7 7 7
	// n n n n n n


	for (int i = 0; i < n; i+=2) {
		for (int j = 0; j < n; j++) {
			a[i][j] = x[j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}