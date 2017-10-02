#include <iostream>

using namespace std;


int main() {
	int a[100];

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n / 2; i++) {
		swap(i, n - i - 1);
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}