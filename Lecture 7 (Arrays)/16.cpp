#include <iostream>

using namespace std;


int main() {
	int n, k;
	int a[100];
	int b[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;

	k = k % n;
	for (int i = 0; i < n; i++) {
		
		int new_index = i - k;
		if (new_index < 0)
			new_index += n;
		b[new_index] = a[i];
	}
	// i = 0
	// new_index = 0 - 3 = -3 + 10 = 7
	// a [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
	// b [4, 5, 0, 0, 0, 0, 0, 1, 2, 3]

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}