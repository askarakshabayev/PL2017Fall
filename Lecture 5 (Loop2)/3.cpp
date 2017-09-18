#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		sum += i * (i + 1); // i = 1, 2, .., n - 1, n
	}
	cout << sum;
	return 0;
}