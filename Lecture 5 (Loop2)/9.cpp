#include <iostream>

using namespace std;

int main() {
	int n;
	double sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (i * i);
	}
	cout << sum;
	return 0;
}