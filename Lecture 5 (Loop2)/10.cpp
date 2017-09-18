#include <iostream>

using namespace std;

int main() {
	int n;
	double sum = 0;

	for (int i = 1, k = 1; i <= n; i++, k += 2) {
		if (i % 2 == 1) {
			sum += 1.0 / k;
		} else {
			sum -= 1.0 / k;
		}
	}
	cout << 4 * sum;
	return 0;
}