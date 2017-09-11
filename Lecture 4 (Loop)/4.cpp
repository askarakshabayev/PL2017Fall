// n
// a1 a2 a3 ... an

// 4
// 3 1 50 20

// 74

#include <iostream>

using namespace std;

int main() {
	int n, x;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		sum = sum + x;
	}
	cout << sum;

	// i = 4, n = 4, sum = 74, x = 20
	return 0;
}