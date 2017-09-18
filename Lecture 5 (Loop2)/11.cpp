#include <iostream>

using namespace std;

int main() {
	int n, a, p = 1; // p = a^0
	cin >> n >> a; // n = 3, a = 2

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += p; // sum += 1 + a + (a * a) + (a * a * a) ...
		p = p * a; // p = a, a * a
	}
	cout << sum;

	return 0;
}