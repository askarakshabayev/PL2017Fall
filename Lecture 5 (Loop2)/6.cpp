#include <iostream>

using namespace std;

int main() {
	int n, k, f1 = 1, f2 = 1, f3 = 1; // f1 = n!, f2 = k!, f3 = (n - k)!
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		f1 *= i;
	}

	for (int i = 1; i <= k; i++) {
		f2 *= i;
	}

	for (int i = 1; i <= (n - k); i++) {
		f3 *= i;
	}

	cout << f1 / (f2 * f3);
	return 0;
}