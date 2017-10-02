#include <iostream>

using namespace std;


int main() {
	int a[100];

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int mini = a[0], ind = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < mini) {
			mini = a[i];
			ind = i;
		}
	}
	// 2 3 1 4 5 8
	// 2 3   4 5 8
	// 2 3 4 5 8

	for (int i = ind + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	a[n - 1] = mini;

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}