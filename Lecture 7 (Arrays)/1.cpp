#include <iostream>

using namespace std;

int main() {
	int a[15];
	for (int i = 0; i < 15; i++) {
		cin >> a[i];
	}

	int maxi = a[0];
	int ind = 0;

	for (int i = 1; i < 15; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
			ind = i;
		}
	}

	cout << maxi << " " << ind + 1;
	return 0;
}