// a1 = 1, a2 = 1
// a(n) = a(n - 1) + a(n - 2)
// 1 1 2 3 5 8 13 ...
// n = 6
// a(n)

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n == 1 || n == 2) {
		cout << 1;
		return 0;
	}

	int a = 1;
	int b = 1;
	int c;
	for (int i = 3; i <= n; i++) {
		c = a + b;
		b = a;
		a = c;
	}
	cout << c;
	// n = 6, i = 3, a = 5, b = 3, c = 5

	return 0;
}


