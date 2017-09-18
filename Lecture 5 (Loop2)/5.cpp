#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f = f * i; // f = 1 * 1 * 2 * 3 * 4 * 5
	}
	cout << f;
	return 0;
}