#include <iostream>

using namespace std;

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int maxi = a[0]; // 4 5 1 2 6 3 maxi = 6
	int k = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
			k = 1;
		} else if (a[i] == maxi) {
			k++;
		}
	}

	cout << k;
	return 0;
}