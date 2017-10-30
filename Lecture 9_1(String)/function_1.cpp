#include <iostream>
#include <cmath>

using namespace std;

int fact(int x) { // x = n
	int f = 1;
	for (int i = 1; i <= x; i++)
		f *= i;
	return f;
} 

// max(x, y)

double max_d(double x, double y) {
	if (x > y) {
		return x;
	}
	return y;
}

int main() {
	int n, k;
	cin >> n >> k;
	int fact1 = fact(n);
	int fact2 = fact(k);
	int fact3 = fact(n - k);
	cout << fact1 / (fact2 * fact3);

	// int fact1 = 1, fact2 = 1, fact3 = 1; // fact1 = n!, fact2 = k!, fact3 = (n - k)!
	// // fact1 / (fact2 * fact3)

	// for (int i = 1; i <= n; i++) {
	// 	fact1 = fact1 * i;
	// }

	// for (int i = 1; i <= k; i++) {
	// 	fact2 *= i;
	// }

	// for (int i = 1; i <= (n - k); i++) {
	// 	fact3 *= i;
	// }

	// int p = fact1 / (fact2 * fact3);
	// cout << p;
	return 0;
}