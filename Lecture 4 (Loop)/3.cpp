#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0, k = 1; i <= n; k=k*2, i++) {
		cout << i << " - " << k << endl; // i = 0, k = 1
	}

	// 0 - 1
	// 1 - 2
	// 2 - 4 ...
	return 0;
}