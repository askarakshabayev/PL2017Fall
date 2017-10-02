#include <iostream>

using namespace std;


int main() {
	int a[100];
	int b[100];

	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 0;
	}

	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			b[k] = a[i];
			k++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}